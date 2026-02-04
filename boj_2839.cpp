//<2839>번 : <설탕 배달>
#include <iostream>

int main()
{
    int N, min = -1;
    scanf("%d", &N);
    for(int i = 0; i*5 <= N; i++)
    {
        for(int j = 0; j*3 <= N; j++)
        {
            if(5*i + 3*j == N && (i+j < min || min == -1))
                min = i+j;
        }
    }
    printf("%d", min);
    return 0;
}