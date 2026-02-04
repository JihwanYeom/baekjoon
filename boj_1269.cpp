//<1269>번 : <대칭 차집합>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, in;
    unordered_set<int> C;
    
    cin >> n >> m;
    for(int i = 0; i < n+m; i++){
        cin >> in;
        if(C.find(in) == C.end())
            C.insert(in);
        else
            C.erase(in);
    }
    cout << C.size() << '\n';
    return 0;
}