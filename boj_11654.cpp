//<문제번호>번 : <제목>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N = 0, sum = 0;
    string str = "";
    cin >> N >> str;
    for(int i = 0; i < N; i++)
        sum += str[i]-'0';
    cout << sum << '\n';
    return 0;
}