//point to struct to function
#include <iostream>

using namespace std;

struct Distance
{
    /* data */
    int feet;
    float inch;
};

int main()
{
    Distance *ptr, d;
    ptr = &d;

    cout << "Enter feet: ";
    cin >> (*ptr).feet;
    cout << "Enter inch: ";
    cin >> (*ptr).inch;

    cout << "Display informartion:" << endl;
    cout << "Distance: " << (*ptr).feet << " feet " << (*ptr).inch << " inhches";

    return 0;
}
