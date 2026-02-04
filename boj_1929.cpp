//<1929>번 : <소수 구하기>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    int* p = new int[M+1];
    for(int i = 0 ; i <= M; i++)
        p[i] = i;
    p[1] = 0;
    for(int i = 2; i <= M; i++)
    {
        if(p[i] != 0)
        {
            for(int j = i + i; j <= M; j += i)
                p[j] = 0;
        }
    }
    for(int i = N ; i <= M; i++)
    {
        if(p[i] != 0)
            cout << p[i] << endl;
    }
    return 0;
}