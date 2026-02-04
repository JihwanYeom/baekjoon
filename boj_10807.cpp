//<10807>번 : <개수 세기>
#include <iostream>

using namespace std;

int main()
{
	int N = 0, v = 0, cnt = 0;
    int ar[100] = {};
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> ar[i];
    }
    cin >> v;
    for(int i = 0; i < N; i++){
        if(v == ar[i])
            cnt++;
    }
    cout << cnt << '\n';
    return 0;
}