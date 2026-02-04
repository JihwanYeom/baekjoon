//<1927>번 : <최소 힙>
#include <bits/stdc++.h>
using namespace std;

int h[100001];
int s = 0;

void push(int x)
{
    h[++s] = x;
    int i = s;
    while(i > 1)
    {
        int p = i/2;
        if(h[p] > h[i])
            swap(h[p], h[i]);
        i = p;
    }
}

int pop()
{
    if(s == 0) return 0;
    int x = h[1];
    swap(h[1], h[s--]);
    int i = 1;
    while(i*2 <= s)
    {
        int l = i*2, r = i*2+1;
        int smaller = l;
        if(s >= r && h[r] < h[l])
            smaller = r;
        if(h[i] < h[smaller])
            break;
        swap(h[i], h[smaller]);
        i = smaller;
    }
    return x;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x == 0) cout << pop() << '\n';
        if(x > 0) push(x);
    }
    return 0;
}