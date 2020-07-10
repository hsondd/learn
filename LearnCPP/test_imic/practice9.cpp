#include <iostream>

using namespace std;

class Shape
{
    public:
        virtual float Area() = 0;
        void setLength(float l)
        {
            length = l;
        }
    protected:
        float length;
};

class Circle : public Shape
{
    public:
        float Area()
        {
            return length * length * 3.14;
        }
};

class Square : public Shape
{
    public:
        float Area()
        {
            return length * length;
        }
};

int main09()
{
    Square s;
    Circle c;
    float n;

    cout << "Enter length to calculate the are of a square: ";
    cin >> n;

    s.setLength(n);
    cout << "Area of square: " << s.Area() << endl;

    cout << "Enter radius to calculate the area of circle: ";
    cin >> n;

    c.setLength(n);

    cout << "Area of circle: " << c.Area() << endl;

    return 0;
}
