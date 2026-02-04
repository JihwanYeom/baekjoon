//<2447>번 : <별 찍기 - 10>
#include <bits/stdc++.h>
using namespace std;

void draw(int i, int j, int n)
{
    if((i/n)%3 == 1 && (j/n)%3 == 1)
        cout << ' ';
    else if(n > 1)
        draw(i,j,n/3);
    else
        cout << '*';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            draw(i,j,n/3);
        cout << '\n';
    }
    return 0;
}