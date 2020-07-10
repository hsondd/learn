#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int tmp;
    while (b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    
}

int main(){
    int a = 5, b = 9;
    cout << "UCLN cua " << a << " va " << b << " la: " << gcd(a,b) << endl;
}