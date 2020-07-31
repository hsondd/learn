#include <bits/stdc++.h>

using namespace std;

class Box
{
    private:
        double width;

    public:
        friend void printWidth()
        {
            Box box;
        }
        void setWidth(double wid);
};

void Box::setWidth(double wid)
{
    width = wid;
}

void printWidth(Box box)
{
    cout << "Width of box: " << box.width << endl;
}

int main()
{


    return 0;
}