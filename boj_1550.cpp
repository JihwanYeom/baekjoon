//<1550>번 : <16진수>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int digit = 1;
    reverse(s.begin(), s.end());
    int result = 0;
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
        int num;
        if(c >= '0' || c <= '9') {
            num =  c - '0';
        }
        if(c >= 'A' && c <= 'F') {
            num = c-'A' + 10;
        }
        result += num * digit;
        digit*=16;
    }
    cout << result << '\n';
    return 0;
}