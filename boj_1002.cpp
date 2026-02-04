//<1002>번 : <터렛>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x1, x2, y1, y2, r1, r2;

    cin >> t;
    while(t--) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        int dx = abs(x2-x1);
        int dy = abs(y2-y1);
        int dist = dx*dx + dy*dy;

        if(x1 == x2 && y1 == y2 && r1 == r2) 
            cout << -1 << '\n';
        else if(r1*r1 > dist || r2*r2 > dist) {
            int k = abs(r2-r1)*abs(r2 - r1);
            if(k > dist) cout << 0 << '\n';
            else if(k < dist) cout << 2 << '\n';
            else if(k == dist) cout << 1 << '\n';
        }
        else {
            int k = (r1 + r2) * (r1 + r2);
            if(dist > k) cout << 0 << '\n';
            else if(dist < k) cout << 2 << '\n';
            else if(dist == k) cout << 1 << '\n';
        }
        
    }

    return 0;
}