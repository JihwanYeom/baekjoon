//<1874>번 : <스택 수열>
#include <bits/stdc++.h>
using namespace std;

int n;
stack<int> s;
vector<char> c;
int a[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    int j = 1;
    for(int i = 1; i <= n; i++) 
    {   
        s.push(i);
        c.push_back('+');
        while(!s.empty() && a[j] == s.top())
        {
            s.pop();
            c.push_back('-');
            j++;
        }
    }
    if(j == n+1)
        for(char ch : c) cout << ch << '\n';
    else
        cout << "NO" << '\n';
    

    return 0;
}
