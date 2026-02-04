//<2110>번 : <공유기 설치>
#include <bits/stdc++.h>
using namespace std;

int n, c;
int h[200000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> c;
    for(int i = 0; i < n; i++)
        cin >> h[i];
    
    sort(h,h+n);

    int l = 1;
    int r = h[n-1] - h[0];
    while(l <= r)
    {
        int mid = (l+r)/2;
        int last = 0, cnt = 1;
        for(int i = 1; i < n; i++) {
            if(h[i] - h[last] >= mid) {
                last = i;
                cnt++;
            }
        }
        if(cnt < c) r = mid-1;
        else l = mid + 1;
    }
    cout << r << '\n';
    return 0;
}