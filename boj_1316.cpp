//<1316>번 : <그룹 단어 체커>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "";
    char abc[26] = {};
    int N = 0, cnt = 0, isGroup = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        isGroup = 1;
        cin >> str;
        for(int j = 0; j < N; j++){
            if(str[j] != str[j-1] && abc[str[j]-'a'] > 0){
                break;
                isGroup = 0;
            }
            abc[str[j] - 'a']++;
        }
        cnt += isGroup;
    }
    cout << cnt << '\n';
    return 0;
}