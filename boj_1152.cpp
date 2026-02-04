//<1152>번 : <단어의 개수>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "";
    int cnt = 0;
    getline(cin,str);
    for(int i = 1; str[i+1] ; i++){
        if(str[i-1] != ' ' && str[i+1] != ' ' && str[i] == ' '){
            cnt++;
        }
    }
    if(str != "" && str != " ")
        cnt++;
    cout << cnt << '\n';
    return 0;
}