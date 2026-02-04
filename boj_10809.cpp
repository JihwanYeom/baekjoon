//<문제번호>번 : <제목>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int exist = 0;
	string S = "";
    cin >> S;
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < S.length(); j++){
            if(S[j] == 'a'+i){
                cout << j << ' ';
                exist = 1;
                break;
            }
        }
        if(exist == 0){
            cout << -1 << ' ';
        }
        exist = 0;
    }
    return 0;
}