//<1450>번 : <냅색문제>
#include <bits/stdc++.h>
using namespace std;

long long n, c, cnt = 0;
long long a[31];
vector<int> x;
vector<int> y;

void func(int i, int end, long long sum, vector<int> *v)
{
    if(i == end)
    {
        if(sum <= c)
            v->push_back(sum);
        return;
    }
    func(i+1, end, sum, v);
    func(i+1, end, sum + a[i], v);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> c;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    func(0, n/2, 0, &x);
    func(n/2, n, 0, &y);

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int i = 0, j = y.size()-1;
    for(int i = 0; i < x.size(); i++) {
        while(j != 0 && x[i] + y[j] > c) {
            j--;
        }
        cnt += j + 1;
    }
    cout << cnt << '\n';

    return 0;
}