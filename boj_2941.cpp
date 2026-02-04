//<2941>번 : <크로아티아 알파벳>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "";
    int cnt = 0;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'c' && str[i+1] == '=')
            i++;
        if(str[i] == 'c' && str[i+1] == '-')
            i++;
        if(str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=')
            i += 2;
        if(str[i] == 'd' && str[i+1] == '-')
            i++;
        if(str[i] == 'l' && str[i+1] == 'j')
            i++;
        if(str[i] == 'n' && str[i+1] == 'j')
            i++;
        if(str[i] == 's' && str[i+1] == '=')
            i++;
        if(str[i] == 'z' && str[i+1] == '=')
            i++;
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}