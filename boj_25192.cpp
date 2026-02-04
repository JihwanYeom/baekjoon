//<25192>번 : <인사성 밝은 곰곰이>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> used;
    string in;
    int n, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        if(in == "ENTER")
            used.clear();
        else if(used.find(in) == used.end())
        {
            used.insert(in);
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}