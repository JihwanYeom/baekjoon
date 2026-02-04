//<18870>번 : <좌표 압축>
#include <iostream>
#include <algorithm>

using namespace std;

typedef struct Coordinate{
    int x1, x2, idx;
}Coordinate;

bool compareX(Coordinate a, Coordinate b)
{
    return a.x1 < b.x1;
}

bool compareIdx(Coordinate a, Coordinate b)
{
    return a.idx < b.idx;
}

int main()
{
    Coordinate* c = new Coordinate[1000000];
    int N;
    cin >> N;   
    for(int i = 0; i< N;i ++)
    {
        cin >> c[i].x1;
        c[i].idx = i;
        c[i].x2 = 0;
    }
    sort(c, c+N, compareX);
    for(int i = 1, x2 = 0; i < N; i++)
    {
        if(c[i].x1 != c[i-1].x1)
            x2++;
        c[i].x2 = x2;
    }
    sort(c,c+N,compareIdx);
    for(int i = 0; i < N; i++)
        cout << c[i].x2 << ' ';
    return 0;
}