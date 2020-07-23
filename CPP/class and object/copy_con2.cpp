#include <bits/stdc++.h>

using namespace std;

class String
{
    private:
        char *s;
        int size;
    public:
        String(const *str = NULL);
        ~String()
        {
            delete[] s;
        }
        String(const String&)
        {
            size = strlen(str);
            s = new char[size + 1];
            strcpy(s, str);
        }
        void print()
        {
            cout << s << endl;
        }
        void change(const char *)
        {
            delete[] s;
            size = strlen(str);
            s = new char[size + 1];
            strcpy(c, str);
        }

}