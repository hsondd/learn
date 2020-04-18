//mat khau it nhat 8 ky tu, co @
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

class Email_length : public runtime_error
{
public:
    Email_length() : runtime_error("Email phai co 8 ky tu"){}
};

class Character : public runtime_error
{
public:
    Character() : runtime_error("Email phai co dau @"){}
};

void GetEmail (vector<char> &EmailInput, string email)
{
    cout << "Nhap email: ";
    cin >> email;
    copy(email.begin(), email.end(), back_inserter(EmailInput));

}

void ShowEmail (vector<char> EmailInput)
{
    for (int i = 0; i < EmailInput.size(); i++)
    {
        cout << EmailInput[i];
    }
    cout << endl;
}

int main()
{   
    string email;
    vector<char> EmailInput;
    GetEmail(EmailInput, email);
    ShowEmail(EmailInput);
    
    try
    {
        if (EmailInput.size() < 8)
        {
            throw Email_length();
        }
    }
    catch(Email_length &e)
    {
        cout << e.what() << endl ;
    }

    try
    {
        vector<char>::iterator iter;
        iter = find(EmailInput.begin(), EmailInput.end(), '@');
        if (iter == EmailInput.end())
        {
            throw Character();
        }
    }
    catch(Character &e)
    {
        cout << e.what() << endl;
    }
    

    return 0;
}