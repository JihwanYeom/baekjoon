//<2164>번 : <카드2>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> q;
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++) 
        q.push(i);

    for(int i = 0; i < N-1; i++)
    {
        q.pop();
        q.push(q.front());
        q.pop();
    }    
    cout << q.front() << '\n';
    return 0;
}