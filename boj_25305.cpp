//<25305>번 : <커트라인>
#include <iostream>

int main()
{
    int N, k;
    int s[1000] = {};
    scanf("%d %d", &N, &k);
    for(int i = 0; i < N; i++)
        scanf("%d", &s[i]);
    for(int i = 1; i < N; i++)
    {
        int tmp = s[i];
        int idx;
        for(idx = i; idx > 0 && tmp > s[idx-1]; idx--)
            s[idx] = s[idx-1];
        s[idx] = tmp;
    }
    printf("%d", s[k-1]);
    return 0;
}