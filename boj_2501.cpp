//<2501>번 : <약수 구하기>
#include <iostream>

using namespace std;

int main()
{
    int N, K;
    int i = 1, j = 0, m = 0;
    cin >> N >> K;
    while(i <= N && j < K)
    {
        if(N%i == 0)
        {
            j++;
            if(j == K)
                m = i;
        }
        i++;
    }
    cout << m << '\n';
    return 0;
}