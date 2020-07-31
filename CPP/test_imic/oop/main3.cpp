#include <iostream>

using namespace std;

class Student
{
public:
    char *name;
    int mark1;
    int mark2;

    Student (char *na, int ma1, int ma2)
    {
        name = na;
        mark1 = ma1;
        mark2 = ma2;
    };

    int calc_media()
    {
        return (mark1 + mark2)/2;
    }
    void disp()
    {
        cout << "Student: " << name << "\nmedia: " << calc_media << endl;
    }
};

int main()
{
    char *name;
    int m1;
    int m2;

    cout << "Enter name" ;
    cin >> name;
    cout << "Enter mark of two subjects: ";
    cin >> m1 >> m2;
    Student studen1(name, m1, m2);
    studen1.disp();

    return 0;
}
