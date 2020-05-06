// 13. Cai dat stack bang template

#include <iostream>

using namespace std;

template <class T>

class Stack
{
private:
    int Size;
    int Top;
    T *Data;
public:
    Stack(int = 10);
    ~Stack();
    bool Push(const T&);
    bool Pop(T&);
    bool isEmpty() const;
    bool isFull() const;
};

template <class T> Stack<T>::Stack(int n)
{
    if (n > 0 && n < 1000)
    {
        Size = n;
    }
    else
    {
        Size = 10;
    }
    Top = -1;
    Data = new T[Size];
}

template <class T> Stack<T>::~Stack()
{
    delete[] Data;
}

template <class T> bool Stack<T>::Pop(T &item)
{
    if (!isEmpty())
    {
        item = Data[Top];
        Top--;
        return true;
    }
    return false;
}

template <class T> bool Stack<T>::isEmpty() const
{
    if (Top == -1)
    {
        return true;
    }
    return false;
}

template <class T> bool Stack<T>::isFull() const
{
    if (Top == Size)
    {
        return true;
    }
    return false;
}

int main()
{
    Stack<int> a(100);

    a.Push(1);
    a.Push(2);
    a.Push(3);
    int data;
    while (a.Pop(data))
    {
        cout << data << endl;
    }
}