//<32334>번 : <자석 체스>
#include <bits/stdc++.h>
using namespace std;

int board[1002][1002] = {};
int n, d, in;

void check(int a, int b) {
    for(int i = a-d; i <= a+d; i++) {
        for(int j = b-d; j <= b+d; j++) {
            if(i < 1 || i > n || j < 1 || j > n) 
                continue;
            board[i][j]++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> d;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> in;
            if(in == 1) {
                board[i][j] = 100000000;
                check(i,j);
            }
                
        }
    }

    int m = INT_MAX;
    int a, b;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(board[i][j] == 0) {
                cout << i << ' ' << j << '\n';
                return 0;
            }
            if(m > board[i][j]) {
                m = board[i][j];
                a = i;
                b = j;
            }
        }
    }
    cout << a << ' ' << b << '\n' << m << '\n';
    return 0;
}
