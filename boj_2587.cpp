//<2587>번 : <대표값2>
#include <iostream>

int main()
{
    int A[5];
    int avg = 0;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
        avg += A[i];
    }
    avg /= 5;
    for(int i = 0; i < 4; i++)
    {
        int min = A[i];
        int idx = i;
        for(int j = i; j < 5; j++)
        {
            if(min > A[j])
            {
                min = A[j];
                idx = j;
            }
        }
        A[idx] = A[i];
        A[i] = min;
    }
    printf("%d\n%d", avg, A[2]);
    return 0;
}
