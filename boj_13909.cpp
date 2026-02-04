//<13909>번 : <창문 열기>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, cnt = 0;
    cin >> N;
    for(int i = 1; i*i <= N; i++)
        cnt++;    
    cout << cnt << '\n';
    return 0;
}