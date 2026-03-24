//<1302>번 : <베스트셀러>
#include <bits/stdc++.h>
using namespace std;

map<string, int> book;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string in;
        cin >> in;
        book[in]++;
    }
    int max_cnt = 0;
    string max_book = "";
    for(auto e : book) {
        if(max_cnt < e.second) {
            max_cnt = e.second;
            max_book = e.first;
        }
    }
    cout << max_book << '\n';
    return 0;
}