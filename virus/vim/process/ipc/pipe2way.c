/*
Tao đường ống, gọi hàm fork() để tạo ra tiến trình con. 
Tiến trình cha sẽ đọc dữ liệu nhập vào từ phía người dùng và ghi vào đường ống trong khi
tiến trình con phía bên kia đường ống tiếp nhận dữ liệu bằng cách đọc từ đường ống và in ra màn hình */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void do_child (int data_pipes[])
{
	int c;//chua du lieu tien trinh cha
	int rc;
	
	close (data_pipes[1]);
	while ((rc = read(data_pipes[0], &c, 1)) > 0)
	{
		putchar(c);
	}
	exit(0);
}

void do_parrent (int data_pipes[])
{
	int c;//du lieu do nguoi dung nhap
	int rc;
	
	close(data_pipes[0]);//dong duong ong dau doc, chi can ghi
	
	while ((c = getchar()) > 0)
	{
		rc = write (data_pipes[1], &c, 1);
		if (-1 == rc)
		{
			perror("parrent: pipe write error");
			close(data_pipes[1]);
			exit(1);
			
		}
	}
	close(data_pipes[1]);
	exit(0);
}

int main ()
{
	int data_pipes[2];
	int pid;
	int rc;
	
	rc = pipe(data_pipes);
	if (-1 == rc)
	{
		perror("Error: pipe not created");
		exit(1);
	}

	pid = fork();
	switch (pid)
	{
		case -1:
			perror("Child process create failed");
			exit(1);
		case 0:
			do_child(data_pipes);
		default:
			do_parrent(data_pipes);
	}
	return 0;
}
