//<2581>번 : <소수>
#include <iostream>

using namespace std;

int main()
{
    int M, N, sum, min, is_Prime;
    cin >> M >> N;

    sum = 0;
    min = N;
    for(int i = M; i <= N; i++)
    {
        if(i == 1)
            continue;
        is_Prime = 1;
        for(int j = 2; j < i; j++)
        {
            if(i%j == 0)
            {
                is_Prime = 0;
                break;
            }
        }
        if(is_Prime)
        {
            sum+=i;
            if(min == N)
                min = i;
        }
    }
    if(sum)
        cout << sum << '\n' << min<< '\n';
    else
        cout << -1 << '\n';
    return 0;
}