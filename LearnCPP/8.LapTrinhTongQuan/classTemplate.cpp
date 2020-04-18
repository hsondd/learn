#include <string>
#include <iostream>

using namespace std;

template <typename T>

class Stack
{
    T data[100];
    int top;
public:
    Stack()
    {
        top = -1;
    }

    void push(T number)
    {
        ++top;
        data[top] = number;
    }

     T pop()
    {
        T val = data[top];
        --top;
        return val;
    }

    T peek()
    {
        return data[top];
    }
};

int main()
{
    // Stack<int> number;

    // number.push(1);
    // number.push(2);
    // number.push(3);
    // number.push(4);
    // number.push(5);

    Stack<string> str;
    str.push("Doan HOng Son");
    str.push("Vu Anh Anh");
    str.push("Nguyen Thi Lam");
    str.pop();
    cout << "Sau khi pop: ";
    cout << str.peek() << endl;
    
}