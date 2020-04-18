#include <iostream>
#include <stdexcept>

using namespace std;

class LessThanZero : public runtime_error
{
public:
    LessThanZero() : runtime_error("\nSo duoc nhap be hon 0"){}
};

class MoreThanTen : public runtime_error
{
public:
    MoreThanTen() : runtime_error("\nSo duoc nhap lon hon 10"){}
};

int main()
{
    int x;
    cout << "\n NHap vao mot so lon hon 0: ";
    cin >> x;
    try
    {
        if (x < 0)
        {
            throw LessThanZero();
        }
        if (x > 10)
        {
            throw MoreThanTen();
        }
    }
    catch(LessThanZero & exception)
    {
       cout << exception.what() << endl;
       x = 0;
    }
    catch(MoreThanTen &exception)
    {
        cout << exception.what() << endl;
        x = 10;
    }
    cout << x;

    return 0;

}