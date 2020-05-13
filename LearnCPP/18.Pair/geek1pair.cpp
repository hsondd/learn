//cpp program to illustrate pair stl
#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int, char> PAIR1;
    PAIR1.first = 100;
    PAIR1.second = 'G';

    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;


    pair<string, double> PAIR2("Doan HOng Son", 10.97);
    cout << PAIR2.first << " " << PAIR2.second << endl;


    pair<int,double> PAIR3;
    pair<string,char> PAIR4;
    cout << PAIR4.first;
    cout << PAIR4.second;
    cout << " ";
    cout << PAIR3.first;
    cout << PAIR3.second;


    return 0;
}