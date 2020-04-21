#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //cus phap: ifstream <ten bien file>;
    ifstream fileIn;
    fileIn.open("test.txt", ios_base::in);

    if (fileIn.fail() == true)
    {
        cout << "\nfile ko ton tai";
        return 0;
    }

    int x;
    int y;
    
    //doc file
    fileIn >> x;
    fileIn >> y;
    cout << "Tong 2 so nguyen: " << x + y;

    //ghi file
    ofstream fileOut;
    fileOut.open("output.txt", ios_base::out);
    fileOut << x + y;

    // cout << "\nHello world";
    fileIn.close();
    fileOut.close();
    return 0;

}