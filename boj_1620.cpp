//<1620>번 : <나는야 포켓몬 마스터 이다솜>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map <string, int> s2i;
    string* i2s = new string[100000];
    string input;
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        cin >> i2s[i];
        s2i[i2s[i]] = i+1; 
    }
    for(int i = 0; i < M; i++)
    {
        cin >> input;
        if(input[0] <= '9' && input[0] >= '1')
            cout << i2s[stoi(input)-1] << ' ';
        else
            cout << s2i[input] << ' ';
    }
    return 0;
}