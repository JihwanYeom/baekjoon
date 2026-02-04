//<10988>번 : <팰린드롬인지 확인하기>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str1 = "", str2 = "";
    cin >> str1;
    str2 = str1;
    reverse(str2.begin(),str2.end());
    if(str1.compare(str2))
        cout << 0 << '\n';
    else
        cout << 1 << '\n';
    return 0;
}