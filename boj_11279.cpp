//<11279>번 : <최대 힙>
#include <bits/stdc++.h>
using namespace std;

int h[100001];
int s = 0;

void push(int k)
{
    h[++s] = k;
    int i = s;
    while(i > 1)
    {
        int p = i/2;
        if(h[i] > h[p]) 
            swap(h[i], h[p]);
        i = p;
    }
}

int pop()
{
    if(s == 0) return 0;

    int popped = h[1];
    swap(h[1], h[s]);
    s--;
    int i = 1;
    while(i*2 <= s)
    {
        int l = i*2, r = i*2+1;
        int bigger = l;
        if(s >= r && h[r] > h[bigger])
            bigger = r;
        if(h[i] >= h[bigger])
            break;
        swap(h[i], h[bigger]);
        i = bigger;
    }
    return popped;
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