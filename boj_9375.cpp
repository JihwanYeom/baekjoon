//<9375>번 : <패션왕 신해빈>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        unordered_map<string, int> cloth;

        for(int i = 0; i < n; i++) {
            string a, b;
            cin >> a >> b;
            if(cloth.find(b) == cloth.end()) {
                cloth.insert({b,1});
            }
            else {
                cloth[b]++;
            }
        }
        int total = 1;
        for(auto c : cloth) {
            total *= c.second+1;
        }
        cout << total-1 << '\n';
    }

    return 0;
}