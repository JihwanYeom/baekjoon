//<9184>번 : <신나는 함수 실행>
#include <bits/stdc++.h>
using namespace std;

//Buttom-Up 방식
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    int w[21][21][21];
    for(int i = 0; i < 21; i++)
    {
        for(int j = 0; j < 21; j++)
        {
            for(int k = 0; k < 21; k++)
            {
                if(i == 0 || j == 0 || k == 0)
                    w[i][j][k] = 1;
                else if(i < j && j < k)
                    w[i][j][k] = w[i][j][k-1] + w[i][j-1][k-1] - w[i][j-1][k];
                else
                    w[i][j][k] = w[i-1][j][k] + w[i-1][j-1][k] + w[i-1][j][k-1] - w[i-1][j-1][k-1];
            }
        }
    }

    while(true)
    {
        cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1)
            break;
        
        cout << "w(" << a << ", " << b << ", " << c << ") = "; 
        if(a <= 0 || b <= 0 || c <= 0)
            cout << 1 << '\n';
        else if(a > 20 || b > 20 || c > 20)
            cout << w[20][20][20] << '\n';
        else
            cout << w[a][b][c] << '\n';
    }
    
    return 0;
}

// Top-Down 방식(권장)
/*
#include <bits/stdc++.h>
using namespace std;

int dp[21][21][21];

int w(int a, int b, int c) {
    if(a <= 0 || b <= 0 || c <= 0)
        return 1;
    if(a > 20 || b > 20 || c > 20)
        return w(20, 20, 20);
    
    if(dp[a][b][c] != 0)
        return dp[a][b][c];
    
    if(a < b && b < c)
        dp[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
    else
        dp[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);

    return dp[a][b][c];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    while(true) {
        cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1)
            break;
        
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
    }

    return 0;
}
*/