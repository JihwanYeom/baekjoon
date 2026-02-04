//<4101>번 : <크냐?>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    while(true)
    {
        cin >> a >> b;
        if(a == 0 && b == 0)
            break;
        if(a > b) cout << "Yes\n"; 
        else cout << "No\n"; 
    }

    return 0;
}