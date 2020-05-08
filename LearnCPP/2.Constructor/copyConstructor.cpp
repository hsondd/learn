#include <bits/stdc++.h>

using namespace std;

class StringClass
{
private:
    char *s;
    int size;
public:
    StringClass(const char *str = NULL);
    ~StringClass()
    {
        delete [] s;
    }
    StringClass(const StringClass&);
    void print()
    {
        cout << s << endl;
    }
    void change(const char *);
};

StringClass::StringClass(const char *str)
{
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s, str);
}

void StringClass::change(const char *str)
{
    delete[] s;
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s, str);
}

StringClass::StringClass(const StringClass& old_str)
{
    size = old_str.size;
    s = new char[size + 1];
    strcpy(s, old_str.s);
}

int main()
{
    StringClass str1("GeekQuiz");
    StringClass str2 = str1;

    str1.print();
    str2.print();

    str2.change("Geeksforgeeks");
    
    str1.print();
    str2.print();
    return 0;
}