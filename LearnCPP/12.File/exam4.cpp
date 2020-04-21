//khong biet so luong phan tu file input.txt

#include <iostream>
#include <fstream>

using namespace std;

bool kiemTraNguyenTo (int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        if (n == 2)
        {
            return true;
        }
        else
        {
            if (n % 2 == 0)
            {
                return false;
            }
            else
            {
                for (int i = 2; i < n; i++)
                {
                    if (n % i == 0)
                    {
                        return false;
                    }
                }
            }
            
        }
    }
    return true;
}

int main()
{
    ifstream fileIn;
    fileIn.open("INPUT.txt", ios_base::in);
    if (fileIn.fail() == true)
    {
        cout << "\nFile khong ton tai";
        return 0;
    }

    int arr[100];
    int i = 0;
    int dem = 0;
    //doc magn so nguyen tu file 
    while (fileIn.eof() == false)
    {
        fileIn >> arr[i];
        i++;
        dem++;
    }


    ofstream fileOut;
    fileOut.open("KETQUA.txt", ios_base::out);
    for (int i = 0; i < dem; i++)
    {
        if (kiemTraNguyenTo(arr[i]) == true)
        {
            fileOut << arr[i] << " ";
        }
    }
    

    fileOut.close();
    fileIn.close();
    return 0;

}