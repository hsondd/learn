#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int imag;
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    void print()
    {
        cout << real << " + i" << imag << endl;
    }

    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
};

int main()
{
    Complex c1(10, 5);
    Complex c2(3, 5);
    Complex c3 = c1 + c2;
    c3.print();
}