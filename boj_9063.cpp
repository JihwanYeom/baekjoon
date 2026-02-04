//<9063>번 : <대지>
#include <iostream>

using namespace std;

int main()
{
    int N, x, y, min_x = 10000, min_y = 10000, max_x = -10000, max_y = -10000;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> x >> y;
        if(min_x > x)
            min_x = x;
        if(min_y > y)
            min_y = y;
        if(max_x < x)
            max_x = x;
        if(max_y < y)
            max_y = y;
    }
    cout << (max_x-min_x)*(max_y-min_y) << '\n';
    return 0;
}