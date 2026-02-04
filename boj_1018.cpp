//<1018>번 : <체스판 다시 칠하기>
#include <iostream>

int main()
{
    int N, M, cnt1 = 0, cnt2 = 0, min = 64;
    char board[50][50] = {};
    scanf("%d %d", &N, &M);
    getchar();
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
            scanf("%c", &board[i][j]);
        getchar();
    }
    for(int i = 0; i <= N-8; i++)
    {
        for(int j = 0; j <= M-8; j++)
        {
            cnt1 = 0;
            cnt2 = 0;
            for(int y = i; y < i+8; y++)
            {
                for(int x = j; x < j+8; x++)
                {
                    if((x+y)%2 == 0 && board[y][x] == 'W')
                        cnt1++;
                    if((x+y)%2 == 1 && board[y][x] == 'B')
                        cnt1++;
                    if((x+y)%2 == 0 && board[y][x] == 'B')
                        cnt2++;
                    if((x+y)%2 == 1 && board[y][x] == 'W')
                        cnt2++;
                }           
            }
            if(cnt1 < min)
                min = cnt1;
            if(cnt2 < min)
                min = cnt2;
        }
    }
    printf("%d\n", min);
    return 0;
}