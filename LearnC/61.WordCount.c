#include <stdio.h>

int WordCount(char str[], int length)
{
    int word = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && (str[i + 1] != ' ' || str[i+1] != '\0'))
        {
            word++;
        }
    }
    return word+1;
}

int main(void)
{
	char str[100];
    	printf("\nNhap chuoi: ");
    	fgets(str, 100, stdin);

	printf(">>%d", WordCount(str,100));
}
