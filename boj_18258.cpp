//<18258>번 : <큐 2>
#include <bits/stdc++.h>
using namespace std;

int* Q;
int front;
int back;

void init()
{
    Q = new int[2000001];
    front = -1;
    back = -1;
}

bool empty()
{
    return front == back; 
}

void push(int x)
{
    back++;
    Q[back] = x;
}

int pop()
{
    if(empty())
        return -1;
    front++;
    return Q[front];
}

int getFront()
{
    if(empty())
        return -1;
    return Q[front+1];
}

int getBack()
{
    if(empty())
        return -1;
    return Q[back];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init();
    int N, x;
    string cmd;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> cmd;
        if(cmd == "push")
        {
            cin >> x;
            push(x);
        }
        else if(cmd == "pop")
            cout << pop() << '\n';
        else if(cmd == "size")
            cout << back-front << '\n';
        else if(cmd == "empty")
        {
            if(empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(cmd == "front")
            cout << getFront() << '\n';
        else if (cmd == "back")
            cout << getBack() << '\n';
    }
    return 0;
}