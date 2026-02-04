//<2798>번 : <블랙잭>
#include <iostream>

using namespace std;

int main()
{
    int N, M, max = 0;
    int card[100];
    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++)
        scanf("%d", &card[i]);
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(j == i) continue;
            for(int k = 0; k < N; k++)
            {
                if(k == i || k == j) continue;
                int sum = card[i] + card[j] + card[k];
                if(max < sum && sum <= M)
                    max = sum;
            }
        }
    }
    printf("%d", max);
    return 0;
}