//<17626>번 : <Four Squares>
#include <iostream>
#include <vector>

using namespace std;

vector<int> d(50001, 10);
int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    d[0] = 0; d[1] = 1;
    for(int i = 2; i <= n; i++) {
        for(int j = 1; j*j <= i; j++) {
            d[i] = min(d[i], d[i-j*j] + 1);
        }
    }
    cout << d[n] << '\n';
    return 0;
}
