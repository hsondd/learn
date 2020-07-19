/**
 * C++ program to find all roots of a quadratic equation
 */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c;
    float root1 , root2, imaginary;
    float discriminant;

    cout << "Enter values of a, b , c of quadratic equation (ax^2 + bX + c): ";
    cin >> a >> b >> c;

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "2 nghiem la: " << root1 << " va " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        cout << "Two equal and real roots exists " << root1 << " and " << root2 << endl;
    }
    else
    {
        root1 = root2  =  -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        cout << "Two distinct complex root exists: " << root1  << " and " << imaginary << endl;
    }

    return 0;
    
}
