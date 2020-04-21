#include <iostream>

using namespace std;

class ClassSample
{
    float a;
    float b;
public:
    float getA()
    {
        return a;
    }
    float getB()
    {
        return b;
    }
    void setA(float a)
    {
        this->a = a;
    }
    void setB(float b)
    {
        this->b = b;
    }
    void output()
    {
        cout << a << "/" << b;
    }

    ClassSample();
    ClassSample(float a, float b)
    {
        this->a = a;
        this->b = b;
    }
};

void operator-(ClassSample &C)
{
    C.setA(-C.getA());
}

int main()
{
    ClassSample C(4, 55);
    -C;
    C.output();
    

    return 0;
}