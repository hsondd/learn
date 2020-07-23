// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     list<int> numbers;
//     numbers.push_back(13);
//     numbers.push_back(17);
//     numbers.push_back(42);
//     numbers.push_back(46);
//     numbers.push_back(99);

//     const list<int>::const_iterator result = find_if
// }

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x = 5;
    auto check = []() -> bool
    {
        if (x == 0)
            return false;
        else
            return true;
    };
    cout << check() << endl;
    return 0;

}
