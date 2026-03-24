//<25628>번 : <햄버거 만들기>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    cout << min(a/2, b) << '\n';

    return 0;
}