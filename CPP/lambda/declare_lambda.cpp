#include <functional>
#include <iostream>

int main()
{
    using namespace std;

    auto f1 = [](int x, int y) { return x + y; };

    cout << f1(2, 3) << endl;

    function<int(int, int)> f2 = [](int x, int y) { return x + y; };

    cout << f2(3, 4);
}