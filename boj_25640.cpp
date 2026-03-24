//<25640>번 : <MBTI>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string mbti;
    int n, cnt = 0;
    cin >> mbti >> n;
    for(int i = 0; i < n; i++) {
        string in;
        cin >> in;
        if(mbti.compare(in) == 0) 
            cnt++;
    }
    cout << cnt << '\n';
    return 0;
}