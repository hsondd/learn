#include <iostream>

using namespace std;

int main02()
{
    int n, sum = 0;
    int s;
    cout << "Input the value for nth term: ";
    cin >> n;
    for (int i = 1; i <= n; i++) 
	{
        s = 0;
        for (int j = 1; j <= i; j++) 
		{
            sum += j;
            s += j;
            cout << j;
            if (j < i) 
			{
                cout << "+";
            }
        }
        cout << " = " << s << endl;
    }
    cout << "The sum of the above series is: " << sum << endl;
}

