//<문제번호>번 : <제목>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int cnt[9] = {};
    cin >> n;
    while(n != 0) {
        if(n%10 == 9) cnt[6]++;
        else cnt[n%10]++;
        n /= 10;
    }
    cnt[6] = (cnt[6] + 1)/2;
    cout << *max_element(cnt, cnt+9) << '\n';

    return 0;
}