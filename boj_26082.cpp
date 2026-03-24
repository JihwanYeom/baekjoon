//<26082>번 : <WARBOY>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    int k = b/a * 3;
    cout << k * c << '\n';

    return 0;
}