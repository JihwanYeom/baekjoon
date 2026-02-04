//<10989>번 : <수 정렬하기3>
#include <iostream>

int main()
{
    int N, x, max = 0;
    scanf("%d", &N);
    int* a = new int[10000];
    for(int i = 0; i < 10000; i++)
        a[i] = 0;
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &x);
        a[x-1]++;
        if(x > max)
            max = x;
    }
    for(int i = 0; i < max; i++)
    {
        for(int j = 0; j < a[i]; j++)
            printf("%d\n", i+1);
    }
    return 0;
}