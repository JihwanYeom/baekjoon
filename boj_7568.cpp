//<7568>번 : <덩치>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int ar[50][2];
    int rank[50];

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> ar[i][0] >> ar[i][1];
    
    for(int i = 0; i < n; i++)
    {
        rank[i] = 1;
        for(int j = 0; j < n; j++)
        {
            if(ar[j][0] > ar[i][0] && ar[j][1] > ar[i][1])
                rank[i]++;
        }
    }

    for(int i = 0; i < n; i++)
        cout << rank[i] << ' ';
    cout << '\n'; 

    return 0;
}