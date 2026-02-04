//<14003>번 : <가장 긴 증가하는 부분 수열 5>
#include <bits/stdc++.h>
using namespace std;

vector<int> lis;
vector<int> idx;
int a[1000001] = {};
int pre[1000001] = {};
stack<int> s;
int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    pre[0] = -1;
    for(int i = 0; i < n; i++) {
        int lb = lower_bound(lis.begin(), lis.end(), a[i]) - lis.begin();
        if(lb == lis.size()) {
            lis.push_back(a[i]);
            idx.push_back(i);
        }
        else {
            lis[lb] = a[i];
            idx[lb] = i;
        }
        if(lb != 0) pre[i] = idx[lb-1];
        else pre[i] = -1;
    }
    int p = idx.back();
    while(p != -1) {
        s.push(a[p]);
        p = pre[p];
    }

    cout << lis.size() << '\n';
    while(!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << '\n';

    return 0;
}