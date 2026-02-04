//<1924>번 : <2007년>
#include <bits/stdc++.h>
using namespace std;

string d[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, day = 0;
    cin >> x >> y;
    for(int i = 0; i < x-1; i++)
        day += m[i];
    day += y;
    cout << d[day%7] << '\n';
    return 0;
}