#include <iostream>

using namespace std;

int main()
{
    int timetwoplusthree = [](int x) { return [](int y) { return y * 2; }(x) + 3; }(5);

    cout << timetwoplusthree << endl;
}