//<10816>번 : <숫자 카드2>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, int> card;
    int N, M, input;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> input;
        if(card.find(input) == card.end())
            card.insert({input, 0});
        card[input]++;
    }
    cin >> M;
    for(int i = 0; i < M; i++)
    {
        cin >> input;
        cout << card[input] << ' ';
    }
    return 0;
}