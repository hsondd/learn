#include <bits/stdc++.h>

using namespace std;

class Shape
{
    protected:
        float l;
    public:
        void getData()
        {
            cin >> l;
        }

    virtual float calArea() = 0;
};

class Square : public Shape
{
    public:
        float calArea()
        {
            return l*l;
        }
};

class Circle : public Shape
{
    public:
        float calArea()
        {
            return 3.14 * l;
        }
};

int main()
{
    Square s;
    Circle c;

    cout << "Enter length to calculate the area of square: ";
    s.getData();
    cout << "Area of square: " << s.calArea();

    cout << "\nEnter radius to calculate the area of circle: ";
    c.getData();
    cout << "Area of circle: " << c.calArea();

    return 0;
}