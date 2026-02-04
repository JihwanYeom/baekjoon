//<14002>번 : <가장 긴 증가하는 부분 수열 4>
#include <bits/stdc++.h>
using namespace std;

int a[1000];
int d[1000] = {};
int pre[1000] = {};
stack<int> s;

int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    
    d[0] = 1;
    int longest = 0;
    for(int i = 1; i < n; i++) {
        d[i] = 1;
        for(int j = 0; j < i; j++) {
            if(a[j] < a[i] && d[j]+1 > d[i]) {
                d[i] = d[j] + 1;
                pre[i] = j;
            }
        }
        if(d[i] > d[longest]) 
            longest = i;
    }

    int p = longest;
    while(d[p] > 1) {
        s.push(a[p]);
        p = pre[p];
    }
    s.push(a[p]);

    cout << d[longest] << '\n';
    while(!s.empty()) {
        cout << s.top() << ' ';
        s.pop(); 
    }
    cout << '\n';

    return 0;
}