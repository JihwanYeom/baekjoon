//<4779>번 : <칸토어 집합>
#include <bits/stdc++.h>
using namespace std;

void cantor(int n)
{
    if(n == 1)
    {
        cout << '-';
        return;
    }
    cantor(n/3);
    for(int i = 0; i < n/3; i++)
        cout << ' ';
    cantor(n/3);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n)
    {
        cantor(pow(3,n));
        cout << '\n';
    }
}