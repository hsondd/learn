#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void PrintStudentInfo(string studentName[], int studentID, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << studentID[i] << "\t" << studentName[i] << endl;
    }
}

int main()
{
    fstream fs;
    string name_of_university;
    string name_of_student[3];
    int id_of_students[3];

    fs.open("StoraggStudentInfo.txt");
    if (!fs)
    {
        return -1;
    }
    int index = 0;

    while (fs)
    {
        fs >> name_of_student[index] >> id_of_students[index];
        index++;
    }
    fs.close();
    PrintStudentInfo(name_of_student, id_of_students, 3);
    return 0;
}