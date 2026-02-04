//<10813>번 : <공 바꾸기>
#include <iostream>

using namespace std;

int main()
{
	int N = 0, M = 0, i = 0, j = 0, tmp = 0;
    int baskets[100] = {};
    cin >> N >> M;
    for(int a = 0; a < N; a++)
        baskets[a] = a+1;
    for(int a = 0; a < M; a++){
        cin >> i >> j;
        tmp = baskets[i-1];
        baskets[i-1] = baskets[j-1];
        baskets[j-1] = tmp;
    }
    for(int a = 0; a < N; a++)
        cout << baskets[a] << ' ';
    cout << '\n';
    return 0;
}