#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <iomanip>
#include <utility>
#include <vector>
#include <string>

int main()
{
    std::string str = "Salut";
    std::vector<std::string> v;

    v.push_back(str);
    std::cout << "After copy, str is: " << quoted(str) << std::endl;

    v.push_back(std::move(str));
    std::cout << "After move, str is: " << quoted(str) << std::endl;

    std::cout << "The content of the vector are { " << quoted(v[0]) << ", " << quoted(v[1]) << " }\n";
}