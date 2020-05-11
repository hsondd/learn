// Replace
// i5 = divide(add(i1, i2), subtract(i3, i4))

// by a simpler code:
// i5 = (i1 + i2) / (i3 - i4)

#include <bits/stdc++.h>

using namespace std;

class Interger
{
private:
    int i;
public:
    Interger(int i = 0)
    {
        this->i = i;
    }

    Interger operator++()
    {
        Interger temp;
        temp.i = ++i;
        return temp;
    }

    void display()
    {
        cout << "i = " << i << endl;
    }
};

int main()
{
    Interger i1(3);

    cout << "Before increment: ";
    i1.display();

    Interger i2 = ++i1;

    cout << "After increment: ";
    i2.display();
}