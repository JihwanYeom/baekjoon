//<10810>번 : <공 넣기>
#include <iostream>

using namespace std;

int main()
{
    int N = 0, M = 0, i = 0, j = 0, k = 0;
    int baskets[100] = {};
    cin >> N >> M;
    for(int a = 0; a < M; a++){
        cin >> i >> j >> k;
        for(i-- ;i < j; i++)
            baskets[i] = k;
    }
    for(int a = 0; a < N; a++)
        cout << baskets[a] << ' ';
    cout << '\n';
    return 0;
}