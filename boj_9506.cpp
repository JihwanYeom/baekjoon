//<9506>번 : <약수들의 합>
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    while(true)
    {
        cin >> n;
        if(n == -1)
            break;
        int sum = 0;
        for(int i = 1; i < n; i++)
        {
            if(n%i == 0)
                sum+=i;
        }
        if(sum == n)
        {
            cout << n << " = 1";
            for(int i = 2; i < n; i++)
            {
                if(n%i == 0)
                    cout << " + " << i;
            }
            cout << '\n';
        }
        else
            cout << n << " is NOT perfect.\n";
    }
    return 0;
}