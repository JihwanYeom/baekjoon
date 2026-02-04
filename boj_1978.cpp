//<1978>번 : <소수 찾기>
#include <iostream>

using namespace std;

int main()
{
    int N = 0, cnt = 0;
    int A[100];
    cin >> N;
    
    for(int i = 0; i < N;i++)
        cin >> A[i];

    cnt = N;

    for(int i = 0; i < N;i++)
    {
        if(A[i] == 1)
        {
            cnt--; 
            continue;
        }
        for(int j = 2; j < A[i];j++)
        {
            if(A[i]%j == 0)
            {
                cnt--; 
                break;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}