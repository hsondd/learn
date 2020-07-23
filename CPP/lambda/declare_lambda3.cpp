#include <functional>
#include <iostream>


using namespace std;

int main()
{
    int i = 3;
    int j = 5;

    function<int (void)> f = [i, &j] { return i + j;};
    i = 22;
    j = 44;

    cout << f() << endl;
}