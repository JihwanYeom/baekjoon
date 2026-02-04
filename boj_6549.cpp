//<6549>번 : <히스토그램에서 가장 큰 직사각형>
#include <bits/stdc++.h>
using namespace std;

long long h[100001] = {};
long long n;

long long func(int l, int r)
{
    if(r - l < 2)
        return h[l];
    int m = (l+r)/2;
    long long max_a = max(func(l,m),func(m,r));
    long long min_h = h[m];
    int i = m, j = m;
    while(i > l && j < r-1)
    {
        if(h[i-1] >= h[j+1])
            min_h = min(min_h, h[--i]);
        else
            min_h = min(min_h, h[++j]);
        max_a = max(max_a, (j-i+1)*min_h);
    }
    while(i > l) 
    {
        min_h = min(min_h, h[--i]);
        max_a = max(max_a, (j-i+1)*min_h);
    }
    while(j < r-1) 
    {
        min_h = min(min_h, h[++j]);
        max_a = max(max_a, (j-i+1)*min_h);
    }
    return max_a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while(true)
    {
        cin >> n;
        if(n == 0) break;
        for (int i = 0; i < n; i++)
            cin >> h[i];
        cout << func(0, n) << '\n';
    }
    
    return 0;
}