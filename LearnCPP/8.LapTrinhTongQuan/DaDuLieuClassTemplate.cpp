#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class T, class U>
class CMap
{
    vector<T> Keys;
    vector<U> Values;
public:
    void insert(T key, U value)
    {
        Keys.push_back(key);
        Values.push_back(value);
    }

    void show(int n)
    {
        cout << Keys[n] << ": " << Values[n] << endl;
    }
};

int main()
{
    CMap<string, float> Grades;
    Grades.insert("Khoa", 1);
    Grades.insert("Son", 10);
    Grades.insert("Nam", 4);
    for (int i = 0; i < 3; i++)
    {
        cout << Grades.show(i);
    }
}