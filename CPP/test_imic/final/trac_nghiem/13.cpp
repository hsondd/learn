#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Int
{
    public:
        Int(int i = 0) : m_i(i) {}
        bool operator< (const Int&a) const
        {
            return this->m_i < a.m_i;
        }
        Int & operator=(const Int &a)
        {
            this->m_i = a.m_i;
            ++m_assignments;
            return *this;
        }

        static int get_assignments()
        {
            return m_assignments;
        }
    private:
        int m_i;
        static int m_assignments;
};

int Int::m_assignments = 0;

int main()
{
    list<Int> l({Int(3), Int(1)});
    l.sort();
    cout << (Int::get_assignments() > 0 ? 1 : 0);

    vector<Int> v({Int(2), Int()});
    sort(v.begin(), v.end());
    cout << (Int::get_assignments() > 0 ? 2 : 0) << endl;

    return 0;
}

// 0 2