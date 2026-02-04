//<1212>번 : <8진수 2진수>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string d[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};
    string in;
    string out = "";

    cin >> in;
    for(int i = 0; i < in.length(); i++) {
        int idx = (int)(in[i]-'0');
        string a = d[idx];
        out.append(a);
    }
    
    bool st = false;
    for(int i = 0; i < out.length(); i++) {
        if(out[i] != '0') st = true;
        if(st) cout << out[i];
    }
    if(out == "000") cout << 0 << '\n';
    cout << '\n';

    return 0;
}