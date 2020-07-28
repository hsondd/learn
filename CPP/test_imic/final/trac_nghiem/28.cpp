#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Shape
{
    string s_name;
    public:
        Shape(string name) : s_name(name){}
        virtual void get_info()
        {
            cout << s_name << endl;
        }
};

class Square : public Shape
{
    int side;
    public:
        Square(string s_name, int value) : Shape(s_name), side(value){}
        void get_info()
        {
            cout << "Area of the square is: " << side * side << endl;
        }
};

class Rectangle : public Shape
{
    int length;
    int width;
    public:
        Rectangle(string s_name, int len, int wid) : Shape(s_name), length(len), width(wid){}
        void get_info()
        {
            cout << "Area of the rectangle is: " << length * width << endl;
        }
};

Shape *create_square(string s_name, int value)
{
    return new Square(s_name, value);
}

Rectangle *create_rectangle(string s_name, int len, int wid)
{
    return new Rectangle(s_name, len, wid);
}


int main()
{
    Shape *quad = create_square("Quadliteral", 4);
    Square *sq = dynamic_cast<Square*>(quad);

    if(sq)
    {
        sq->get_info();
    }
    Rectangle *rect = create_rectangle("Quadliteral", 4, 5);
    Shape *quad1 = dynamic_cast<Shape *>(rect);
    Square *sq1 = dynamic_cast<Square*>(quad1);
    if (sq1 == NULL)
    {
        cout << "Invalid casting" << endl;
    }

    return 0;
}

// Area of the square is: 16
// Invalid casting