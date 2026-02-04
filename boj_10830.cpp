//<10830>번 : <행렬 제곱>
#include <bits/stdc++.h>
using namespace std;

long long n, b, mod = 1000;
int** a;

int** mat_mul(int** a, int ** b)
{
    int** m = new int*[n];
    for(int i = 0; i < n; i++)
        m[i] = new int[n];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            m[i][j] = 0;
            for(int k = 0; k < n; k++)
                m[i][j] += (a[i][k]%mod * b[k][j]%mod)%mod;
            m[i][j] = m[i][j]%mod;
        }
    }
    return m;
}

int** func(int** a, long long b)
{
    if(b == 1) return a;
    int** m1 = func(a,b/2);
    if(b%2 == 1) 
    {
        int** m2 = mat_mul(mat_mul(m1,m1),a);
        return m2;
    }
    if(b%2 == 0) 
    {
        int** m2 = mat_mul(m1,m1);
        return m2;
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> b;
    int** a = new int*[n];
    for(int i = 0; i < n; i++)
        a[i] = new int[n];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            a[i][j] = a[i][j] % mod;
        }
    }

    int** result = func(a,b);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << result[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}