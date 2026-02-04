//<14889>번 : <스타트와 링크>
#include <bits/stdc++.h>
using namespace std;

int n;
int _min = 2100000000;
int stat[20][20];
int t1[10];
int t2[10];

bool isTeam1(int num)
{
    for(int i = 0; i < n/2; i++)
    {
        if(t1[i] == num)
            return true;
    }
    return false;
}

void bulidTeam2()
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(!isTeam1(i))
            t2[cnt++] = i;
    }   
}

void func(int i, int num)
{
    if(i == n/2)
    {
        int s1 = 0, s2 = 0;
        bulidTeam2();
        for(int i = 0; i < n/2; i++)
        {
            for(int j = 0; j < n/2; j++)
            {
                s1 += stat[t1[i]][t1[j]];
                s2 += stat[t2[i]][t2[j]];
            }
        }
        int diff = abs(s1-s2);
        if(diff < _min) _min = diff;
        return;
    }
    for(int j = num; j < n; j++)
    {
        t1[i] = j;
        func(i+1, j+1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> stat[i][j];
    }
    func(0,0);
    cout << _min << '\n';
    return 0;
}

// 빠르긴 한데 부정확한 코드
/*
int n;
int _min = 2100000000;
int stat[20][20];
int t1[10];
int t2[10];

void func(int p1, int p2)
{
    if(p1 + p2 == n)
    {
        int s1 = 0, s2 = 0;
        for(int i = 0; i < n/2; i++)
            cout << t1[i] << ' ';
        cout << "       ";
        for(int i = 0; i < n/2; i++)
            cout << t2[i] << ' ';
        cout << '\n';
        for(int i = 0; i < n/2; i++)
        {
            for(int j = 0; j < n/2; j++)
            {
                s1 += stat[t1[i]][t1[j]];
                s2 += stat[t2[i]][t2[j]];
            }
        }
        int diff = abs(s1-s2);
        if(diff < _min) _min = diff;
    }
    if(p1 < n/2)
    {
        t1[p1] = p1+p2;
        func(p1+1,p2);
    }
    if(p2 < n/2)
    {
        t2[p2] = p1+p2;
        func(p1,p2+1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> stat[i][j];
    }
    func(0,0);
    cout << _min << '\n';
    return 0;
}
*/