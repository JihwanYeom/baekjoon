//<10815>번 : <숫자 카드>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set <int> card;
    int N, M, num;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> num;
        card.insert(num);
    }
    cin >> M;
    for(int i = 0; i < M; i++)
    {
        cin >> num;
        cout << (card.find(num) != card.end()) << ' ';
    }
    return 0;
}