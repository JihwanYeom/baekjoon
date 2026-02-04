//<1764>번 : <듣보잡>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> a;
    set<string> b;
    string n;
    int N, M, cnt = 0;
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        cin >> n;
        a.insert(n);
    }
    for(int i = 0; i < M; i++)
    {
        cin >> n;
        if(a.find(n) != a.end())
        {
            b.insert(n);
            cnt++;
        }
    }
    cout << cnt << '\n';
    for(auto i : b)
        cout << i << '\n';
    return 0;
}