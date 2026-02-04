//<2751>번 : <수 정렬하기>
#include <iostream>
#include <algorithm>

int main()
{
    int N;
    scanf("%d", &N);
    int* A = new int[N];
    for(int i = 0; i < N; i++)
        scanf("%d", &A[i]);
    std::sort(A, A+N);
    for(int i = 0; i < N; i++)
        printf("%d", A[i]);
    return 0;
}