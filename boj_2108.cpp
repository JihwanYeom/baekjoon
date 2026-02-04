//<2108>번 : <통계학>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int ar[500000];
    int freq[8001] = {};
    bool isFirst = true;
    int n, sum, max, min, fmax, range, avg, mode, median;
    sum = 0;
    max = -4000;
    min = 4000;
    fmax = 0;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        freq[ar[i]+4000]++;
        sum += ar[i];
        if(max < ar[i])
            max = ar[i];
        if(min > ar[i])
            min = ar[i];
        if(fmax < freq[ar[i]+4000])
            fmax = freq[ar[i]+4000];
    }
    if(sum < -0.5){avg = (int)(sum/(float)n - 0.5);}
    else {avg = (int)(sum/(float)n + 0.5);}
    sort(ar, ar+n);
    median = ar[n/2];
    
    for(int i = 0; i <= 8000; i++)
    {
        if(freq[i] == fmax){
            mode = i-4000;
            if(isFirst) isFirst = false;
            else break;
        }
    }
    range = max-min;
    cout << avg << '\n' 
         << median << '\n' 
         << mode << '\n' 
         << range << '\n';
    return 0;
}