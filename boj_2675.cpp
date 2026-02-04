//<2675>번 : <문자열 반복>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S = "", P = "";
    int R = 0, T = 0;
    cin >> T;
    for(int i = 0; i < T; i++){
        P = "";
        cin >> R >> S;
        for(int j = 0; j < S.length(); j++){
            for(int k = 0; k < R; k++)
                P = P + S[j];
        }
        cout << P << '\n';
    }
    return 0;
}