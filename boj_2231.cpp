//<2231>번 : <분해합>
#include <iostream>

using namespace std;

int main()
{
    int N, M, sum, min = 1000001;
    scanf("%d", &N);
    for(int i = 1; i < N; i++)
    {
        sum = i;
        M = i;
        while(M > 0)
        {
            sum += M%10;
            M /= 10;
        }
        if(sum == N && i < min)
            min = i;
    }
    if(min > 1000000)
        printf("0");
    else
        printf("%d\n", min);
    return 0;
}