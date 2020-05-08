#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char *daoNguoc(char str[])
{
    int length = strlen(str);
    char *temp = new char[length + 1];
    for (int i = 0; i < length; i++)
    {
        temp[i] = str[length - 1 - i];
    }
    temp[length] == '\0';
    return temp;
}

int main()
{
    char s[100];
    cin.getline(s, 100);
    
    char *kq = daoNguoc(s);
    cout << kq << endl;
    return 0;
}