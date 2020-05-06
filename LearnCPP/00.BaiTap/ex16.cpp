//16. Dem so luong ky tu trong chuoi
#include <iostream>

using namespace std;

int main()
{   
    int count;
    char s[] = "Vu Anh Anh";
    while (s[count] != '\0')
    {
        count++;
    }
    cout << "So luong ky tu: " << count;
    return 0;
}