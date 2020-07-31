#include <bits/stdc++.h>

using namespace std;

class Point
{
    private:
        int x, y;
    public:
        Point(int x1, int y1)
        {
            x = x1;
            y = y1;
        }

        Point(const Point &p2)
        {
            x = p2.x;
            y = p2.y;
        }

        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
};

int main()
{
    Point p1(10, 14);
    Point p2 = p1;

    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    cout << "\np2.x = " << p2.getY() << ", p2.y = " << p2.getY();

    return 0;
}