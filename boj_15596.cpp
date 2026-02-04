//<15996>번 : <정수 N개의 합>
#include <bits/stdc++.h>
using namespace std;

long long sum(std::vector<int> &a) {
    int ans = 0;
    for(int i : a) 
        ans += i;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> a;
    a.push_back(1);
    a.push_back(4);
    a.push_back(5);
    cout << sum(a) << endl;

    return 0;
}