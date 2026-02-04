//<27866>번 : <문자와 문자열>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T = 0;
    string str = "";
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> str;
        cout << str.front() << str.back() << '\n';
    }
    return 0;
}