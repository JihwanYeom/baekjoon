//<10811>번 : <바구니 뒤집기>
#include <iostream>

using namespace std;

int main()
{
	int baskets[100] = {};
    int N = 0, M = 0, i = 0, j = 0, tmp = 0;
    cin >> N >> M;
    for(int a = 0; a < N; a++)
        baskets[a] = a+1;
    for(int a = 0; a < M; a++){
        cin >> i >> j;
        i--;
        j--;
        for(int b = i; b <= (i+j)/2 ; b++){
           tmp = baskets[b];
           baskets[b] = baskets[j+i-b];
           baskets[j+i-b] = tmp;
        }
    }
    for(int a = 0; a < N; a++)
        cout << baskets[a] << ' ';
    cout << '\n';
    return 0;
}