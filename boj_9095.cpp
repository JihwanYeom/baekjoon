//<9095>번 : <1,2,3 더하기>
#include <bits/stdc++.h>
using namespace std;

int n,t;
int ar[11] = {};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    ar[1] = 1;
    ar[2] = 2;
    ar[3] = 4;
    for(int i = 4; i < 11; i++)
        ar[i] = ar[i-1] + ar[i-2] + ar[i-3];

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        cout << ar[n] << '\n';
    }

    return 0;
}


/*

1 

1 1
2

1 1 1
1 2
2 1
3

1 1 1 1
1 2 1
2 1 1
3 1

1 1 1 1
1 1 2
1 2 1
1 3

1 1 2
2 1 1
2 2
2 2

1 1 1 1
1 2 1
2 1 1
3 1

1 1 2
1 3

2 2



  1 2 3 4 5 6 7 8 9 10
1 1 2 4 7

*/