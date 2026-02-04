//<1157>번 : <단어 공부>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "";
    int count[26] = {};
    int max = 0, cnt = 0;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            count[str[i] - 'A']++;
        else if(str[i] >= 'a' && str[i] <= 'z')
            count[str[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(count[max] < count[i])
            max = i;
    }
    for(int i = 0; i < 26; i++){
        if(count[i] == count[max])
            cnt++;
    }
    if(cnt > 1)
        cout << '?' << '\n';
    else
        cout << char(max+'A') << '\n';
    return 0;
}