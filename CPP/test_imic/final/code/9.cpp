#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Shape
{
    public:
        virtual float area() = 0;
};

class Square : public Shape
{
    public:
        float length;
        float area()
        {
            return length * length;
        }
};

class Circle : public Shape
{
    public:
        float radius;
        float area()
        {
            return 3.14  * radius * radius;
        }
};

int main()
{
    Square s;
    Circle c;

    cout << "Enter length to calculate the area of a square: ";
    cin >> s.length;
    cout << "Area of square: " << s.area();

    cout << "\nEnter radius to calculate the area of a circle: ";
    cin >> c.radius;
    cout << "Area of square: " << c.area();

    return 0;
}