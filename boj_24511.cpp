//<24511>번 : <queuestack>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A[100000];
    deque<int> B;
    int n, m, in;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> A[i];
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        if(A[i] == 0)
            B.push_back(in);
    }

    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> in;
        B.push_front(in);
        cout << B.back() << ' ';
        B.pop_back();
    }

    return 0;
}