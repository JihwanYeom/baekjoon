//<3009>번 : <네 번째 점>
#include <iostream>

using namespace std;

int main()
{
    int x = 0, y = 0, a, b;
    for(int i = 0; i < 3; i++)
    {
        cin >> a >> b;
        x ^= a;
        y ^= b;
    }
    cout << x << " " << y << '\n';
    return 0;
}