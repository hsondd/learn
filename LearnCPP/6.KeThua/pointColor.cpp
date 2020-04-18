#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

class Color
{
    protected:
        string tenmau;
        string mamau;
    public:
        Color()
        {
            tenmau = mamau = "";
        }

        Color(string tenmau, string mamau)
        {
            this->tenmau = tenmau;
            this->mamau = mamau;
        }
        ~Color()
        {
            tenmau = mamau = "";
        }

        friend istream &operator>>(istream &is, Color &obj)
        {
            cout << "Nhap ten mau: ";
            fflush(stdin);
            getline(is, obj.tenmau);
            cout << "Nhap ma mau: ";
            fflush(stdin);
            getline(is, obj.mamau);
            return is;
        }

        friend ostream &operator<<(ostream &os, Color obj)
        {
            os << "Ten mau: " << obj.tenmau << endl;
            os << "Ma mau: " << obj.mamau << endl;
            return os;
        }

        string getTenMau()
        {
            return this->tenmau;
        }
};
 
class Point
{
protected:
    int x;
    int y;
public:
    Point()
    {
        x = y = 0;
    }

    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    ~Point()
    {
        x = y = 0;
    }

    friend istream &operator>>(istream &is, Point &obj)
    {
        cout << "Nhap x, y: ";
        is >> obj.x >> obj.y;
        return is;
    }

    friend ostream &operator<<(ostream &os, Point obj)
    {
        os << "x = " << obj.x << endl;
        os << "y = " << obj.y << endl;
    }

    bool CheoChinh()
    {
        if (x == y)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};

class Pixel : public Color, public Point
{
    public:
        Pixel()
        {
            x = y = 0;
            tenmau = mamau = "";
        }

        Pixel(int x, int y, string tenmau, string mamau)
        {
            this->x = x;
            this->y = y;
            this->tenmau = tenmau;
            this->mamau = mamau;
        }

        ~Pixel()
        {
            x = y = 0;
            tenmau = mamau = "";
        }

        friend istream &operator>>(istream &is, const Pixel &obj)
        {
            cout << "Nhap x: ";
            is >> obj.x;
            cout << "Nhap y: ";
            is >> obj.y;
            cout << "Nhap ten mau: ";
            is >> obj.tenmau;
            cout << "Nhap ma mau: ";
            is >> obj.mamau;
            return is;
        }

        friend ostream &operator<<(ostream &os, Pixel obj)
        {
            os << "x = " << obj.x << endl;
            os << "y = " << obj.y << endl;
            os << "Ten mau = " << obj.tenmau << endl;
            os << "Ma mau = " << obj.mamau << endl;
            return os;
        }

        bool Check()
        {
            if (x == y && mamau = "#0000FF")
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    int n;
    cout << "Nhap so luong";
    cin >> n;
    Pixel *arr = new Pixel[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "output" << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].Check() == true)
        {
            cout << arr[i];
        }
    }
    return 0;

}