//<33559>번 : <Infinite Array Swaps>
#include <bits/stdc++.h>
using namespace std;

multiset<int> s;
queue<int> a;
queue<int> b;
queue<int> tmp;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> m;
        s.insert(m);
    }
    for(int i = 0; i < n; i++) {
        cin >> m;
        multiset<int>::iterator it = s.find(m);
        if(it == s.end()) { 
            tmp.push(m);
        }
        else {
            cnt++;
            s.erase(it);
            a.push(m);
            b.push(m);
        }
    }
    
    for(int e : s) {
        a.push(e);
    }
    while(!tmp.empty()) {
        b.push(tmp.front());
        tmp.pop();
    }
    
    cout << cnt << '\n';
    while(!a.empty()) {
        cout << a.front() << ' ';
        a.pop();
    }
    cout << '\n';
    while(!b.empty()) {
        cout << b.front() << ' ';
        b.pop();
    }
    cout << '\n';
    return 0;
}