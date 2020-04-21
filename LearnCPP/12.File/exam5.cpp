//con tro chi vi
//seekg(x,y)
//x : so byte can dich(luon la so nguyen)
        // neu x am dich ve ben trai, x > 0 dich ve ben phai
// y: vi tri can dich
//     y = 0: dau file 
//     y = 1": vi tri hien tai
//     y=2: vi tri cuoi file


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fileIn;
    fileIn.open("INPUT5.txt", ios_base::in);
    fileIn.seekg(3, ios_base::beg);

    int x;
    fileIn >> x;
    cout << x << endl;

    fileIn.close();
    return 0;
}