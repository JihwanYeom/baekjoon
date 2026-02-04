//<1085>번 : <직사각형에서 탈출>
#include <iostream>

using namespace std;

int main()
{
    int x, y, w, h, dist;
    cin >> x >> y >> w >> h;
    dist = x;
    if(w-x < dist)
        dist = w-x;
    if(y < dist)
        dist = y;
    if(h-y < dist)
        dist = h-y;
    cout << dist << '\n';
    return 0;
}