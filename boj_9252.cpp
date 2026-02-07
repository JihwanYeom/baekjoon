//<9252>번 : <pre2>
#include <bits/stdc++.h>
using namespace std;

int d[1001][1001] = {};
pair<int, int> pre[1001][1001] = {};
stack<char> s;
string a;
string b;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a;
    cin >> b;
    a = " " + a;
    b = " " + b;

    for(int i = 1; i < b.length(); i++) {
        for(int j = 1; j < a.length(); j++) {
            if(a[j] == b[i]) {
                d[i][j] = d[i-1][j-1] + 1;
                pre[i][j] = {i-1, j-1};
                continue;
            }
            if(d[i][j-1] > d[i-1][j]) {
                d[i][j] = d[i][j-1];
                pre[i][j] = {i, j-1};
            }
            else {
                d[i][j] = d[i-1][j];
                pre[i][j] = {i-1, j};
            }
        }
    }

    int len = d[b.length()-1][a.length()-1];
    cout << len << '\n';

    int i = b.length()-1;
    int j = a.length()-1;
    int tmp;
    while(d[i][j] != 0) {
        if(a[j] == b[i])
            s.push(a[j]);
        
        tmp = i;
        i = pre[i][j].first;
        j = pre[tmp][j].second;
    }
    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << '\n';
    return 0;
}
