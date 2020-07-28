#include <iostream>

using namespace std;

class C
{
    public:
        C(int i) : i(i)
        {
            cout << i;
        }
        ~C()
        {
            cout << i + 5;
        }
    private:
        int i;
};

int main()
{
    const C &c = C(1);
    C(2);
    C(3);
}

// 127386