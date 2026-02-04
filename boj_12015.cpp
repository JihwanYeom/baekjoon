//<12015>번 : <가장 긴 증가하는 부분 수열 2>
#include <bits/stdc++.h>
using namespace std;

vector<int> ar, lis;
int n, in;

int bs(int k)
{
    int l = 0;
    int r = lis.size()-1;
    while(l < r)
    {
        int mid = (l+r)/2;
        if(lis[mid] < k) l = mid+1;
        if(lis[mid] >= k) r = mid;
    }
    return l;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        ar.push_back(in);
    }

    lis.push_back(ar[0]);
    
    for(int i = 1; i < ar.size(); i++)
    {
        int r = lis.back();
        if(ar[i] < r)
            lis[bs(ar[i])] = ar[i];
        if(ar[i] > r) 
            lis.push_back(ar[i]);
    }

    cout << lis.size() << '\n';

    return 0;
}