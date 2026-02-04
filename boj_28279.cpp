//<28279>번 : <덱 2>
#include <bits/stdc++.h>
#define MAX_SIZE 1000000
using namespace std;

int* D;
int front;
int back;

void init()
{
    D = new int[MAX_SIZE*2+1];
    front = MAX_SIZE;
    back = MAX_SIZE;
}

void push_front(int x)
{
    D[front] = x;
    front--;
}

void push_back(int x)
{
    back++;
    D[back] = x;
}

bool isEmpty()
{
    return back == front;
}

int pop_front()
{
    if(isEmpty())
        return -1;
    front++;
    return D[front];
}

int pop_back()
{
    if(isEmpty())
        return -1;
    int x = D[back];
    back--;
    return x;
}

int size()
{
    return back-front;
}



int get_front()
{
    if(isEmpty())
        return -1;
    return D[front+1];
}

int get_back()
{
    if(isEmpty())
        return -1;
    return D[back];
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init();
    int n, x, cmd;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> cmd;
        if(cmd == 1) 
        { 
            cin >> x;
            push_front(x);
        }
        else if(cmd == 2) 
        {
            cin >> x;
            push_back(x);
        }
        else if(cmd == 3) 
            cout << pop_front() << '\n';
        else if(cmd == 4)
            cout << pop_back() << '\n';
        else if(cmd == 5)
            cout << size() << '\n';
        else if(cmd == 6)
        {
            if(isEmpty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if(cmd == 7)
            cout << get_front() << '\n';
        else if(cmd == 8)
            cout << get_back() << '\n';
    }

    return 0;
}