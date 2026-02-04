//<10773>번 : <제로>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> s;
    int K, n, sum = 0;

    cin >> K;
    for(int i = 0; i < K;i++)
    {
        cin >> n;
        if(n == 0)
        {
            sum -= s.top();
            s.pop();
        }
        else
        {
            sum += n;
            s.push(n);
        }
    }
    cout << sum << '\n';
    return 0;
}