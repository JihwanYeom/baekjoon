//<11650>번 : <좌표 정렬하기2>
#include <iostream>
#include <algorithm>

typedef struct Coordinate
{
    int x, y;
}Coordinate;

bool compare(Coordinate a, Coordinate b)
{
    return a.y < b.y || ((a.y == b.y) && a.x < b.x);
}

int main()
{
    int N;
    Coordinate c[100000];
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        scanf("%d %d", &c[i].x, &c[i].y);
    std::sort(c,c+N,compare);   
    for(int i = 0; i < N; i++)
        printf("%d %d\n", c[i].x, c[i].y);
    return 0;
}