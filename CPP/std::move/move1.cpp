#include <iostream>

class Array
{
private:
    int* _pData;
    int _n;
public:
    Array(int n)
    {
        _pData = new int[n];
        _n = n;
    }

    //copy semantics
    const Array& Assign(const Array& value)
    {
        this->_pData = new int[value._n];
        this->_n = value._n;
        for (int i = 0; i < value._n; i++)
        {
            this->_pData[i] = value._pData[i];
        }
        return *this;
    }

    // move semantics
    const Array& Assign(Array&& value)
    {
        this->_pData = value._pData;
        value._pData = nullptr;
        this->_n = value._n;
        return *this;
    }
};

int main()
{
    Array b(1000000000);
    Array a(1);

    a.Assign(b);
    a.Assign(Array(10000000));
}