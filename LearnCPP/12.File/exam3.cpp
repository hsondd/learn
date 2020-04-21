//file vs array
//doc 1 day so nguyen tu input.txt
//dong dau tien chua so nguyen hien co trong file
//dong tiep theo la 1 day cac so nguyen
//doc 1 so nguyen tu input.txt neu la so nguyen to thi ghi du lieu vao KETQUA.txt
// ghi true neu so nguyen to
// false neu kp so nguyen to

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
    int n;
    fileIn >> n;
    for (int i = 1; i < n; i++)
    {
        fileIn >> arr[i];//doc du lieu tu file
    }


    ofstream fileOut;
    fileOut.open("KETQUA.txt", ios_base::out);
    for (int i = 0; i < n; i++)
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