#include <iostream>
#include <thread>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

double calculate_pi(int terms) 
{
    double sum = 0.0;

    for(int i = 0; i < terms; i++)
    {
        int sign = pow(-1, i);
        double term = 1.0/(i * 2 + 1);
        sum += sign * term;
    }

    return sum * 4;
}

int main() 
{
    packaged_task<double(int)> task1(calculate_pi);

    future<double> future1 = task1.get_future();
    thread t1(move(task1), 1E6);

    try{
        double result = future1.get();
        cout << setprecision(15) << result << endl;
    } catch (exception &e)
    {
        cout << "ERROR? " << e.what() << endl;
    }
        
    t1.join();
}