//<11444>번 : <피보나치 수 6>
#include <bits/stdc++.h>
using namespace std;

int **a;
long long n, mod = 1000000007;

int** mat_mul(int **m1, int **m2)
{
    int** m3 = new int*[2];
    for (int i = 0; i < 2; i++)
        m3[i] = new int[2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            m3[i][j] = 0;
            for (int k = 0; k < 2; k++)
                m3[i][j] += (m1[k][j]%mod * m2[i][k]%mod)%mod;
            m3[i][j] %= mod;
        }
    }
    return m3;
}

int **mat_pow(int **m, long long k)
{
    if (k == 1)
        return a;
    int **m2 = mat_pow(m, k / 2);
    if (k % 2 == 1)
        return mat_mul(mat_mul(m2, m2), a);
    if (k % 2 == 0)
        return mat_mul(m2, m2);
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    a = new int *[2];
    a[0] = new int[2];
    a[1] = new int[2];
    a[0][0] = 1; a[0][1] = 1;
    a[1][0] = 1; a[1][1] = 0;

    cin >> n;
    if(n == 0){ cout << 0 << '\n'; return 0; }
    if(n == 1){ cout << 1 << '\n'; return 0; }
    int** m = mat_pow(a,n-1);
    cout << m[0][0] << '\n';

    return 0;
}