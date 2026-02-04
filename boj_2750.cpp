//<2750>번 : <수 정렬하기기>
#include <iostream>

int main()
{
    int N;
    int A[1000] = {};
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        scanf("%d", &A[i]);
    for(int i = 0; i < N-1; i++)
    {
        for(int j = 0; j < N-1; j++)
        {
            if(A[j] > A[j+1])
            {
                int tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
        }
    }
    for(int i = 0; i < N; i++)
        printf("%d\n", A[i]);
    return 0;
}