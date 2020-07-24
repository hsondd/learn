#include <bits/stdc++.h>

using namespace std;

class Circle1
{
    private:
        double radius;
    public:
        double compute_area()
        {
            return 3.14*radius*radius;
        }
};

int Access_modifiers_private()
{
    Circle1 obj;

    cout << "Area is: " << obj.compute_area();

    return 0;
}

int main()
{


    return 0;
}