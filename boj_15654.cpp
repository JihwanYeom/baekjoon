//<15654>번 : <N과 M (5)>
#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[8] = {};
int b[8] = {};

void func(int k) {
    if(k == m) {
        for(int i = 0; i < m; i++) {
            cout << b[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 0; i < n; i++) {
        bool isExist = false;
        for(int j = 0; j < k; j++) {
            if(b[j] == a[i]) {
                isExist = true;
                break;
            }
        }
        if(isExist) continue;
        b[k] = a[i];  
        func(k+1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i =0 ; i <n; i++)
        cin >> a[i];
    sort(a, a+n);
    func(0);

    return 0;
}
