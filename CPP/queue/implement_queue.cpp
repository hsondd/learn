#include <bits/stdc++.h>


using namespace std;

void show(queue<int> q)
{
    queue<int> g = q;
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(2);
    gquiz.push(39);

    cout << "The queue gquiz is: ";
    show(gquiz);

    cout << "quiz size: " << gquiz.size() << endl;
    cout << "quiz.front(): " << gquiz.front() << endl;
    cout << "quiz.back(): " << gquiz.back() << endl;

    cout << "quiz.pop(): ";
    gquiz.pop();
    show(gquiz);

    return 0;
}
