//<11653>번 : <소인수분해>
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int i = 2; i*i <= N; i++)
    {
        while(N%i == 0)
        {
            N/=i;
            cout << i << '\n';
        }
    }
    if(N > 1)
        cout << N << '\n';
    return 0;
}