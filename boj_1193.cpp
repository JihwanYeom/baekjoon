//<1193>번 : <분수찾기>
#include <iostream>

using namespace std;

int main()
{
    int X, i;
    cin >> X;
    for(i = 1; i < X; i++)
        X -= i;
    if(i%2 == 0) cout << X << "/" << i-X+1;
    if(i%2 == 1) cout << i-X+1 << "/" << X;
    return 0;
}