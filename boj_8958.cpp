//<8958>번 : <OX퀴즈>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string ox;
    int score[100];
    int sum;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> ox;
        sum = 0;
        if(ox[0] == 'O') score[0] = 1;
        if(ox[0] == 'X') score[0] = 0;
        sum += score[0];
        for(int i = 1; ox[i]; i++)
        {
            if(ox[i] == 'O') score[i] = score[i-1]+1;
            if(ox[i] == 'X') score[i] = 0;
            sum += score[i];
        }
        cout << sum << '\n';
    }

    return 0;
}