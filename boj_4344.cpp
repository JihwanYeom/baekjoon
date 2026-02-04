//<4344>번 : <평균은 넘겠지>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int c, n, sum, cnt;
    int a[1000];
    float avg;
    cin >> c;
    for(int i = 0; i < c; i++)
    {
        cin >> n;
        sum = 0;
        for(int j = 0; j < n; j++)
        {
            cin >> a[j];
            sum += a[j];
        }
        avg = sum/(float)n;
        cnt = 0;
        for(int j = 0; j < n; j++)
            if(a[j] > avg) cnt++;
        printf("%.3f%\n", cnt/(float)n*100);
    }

    return 0;
}