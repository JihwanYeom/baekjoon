//<24060>번 : <알고리즘 수업 - 병합 정렬1>
#include <bits/stdc++.h>
using namespace std;

int n, k, cnt;
int *A, *tmp;

void merge(int p,int q, int r)
{
    int i = p, j = q+1, t = 0;
    while(i <= q && j <= r)
    {
        if(A[i] <= A[j])
            tmp[t++] = A[i++];
        else
            tmp[t++] = A[j++];
    }
    while(i <= q)
        tmp[t++] = A[i++];
    while (j <= r)
        tmp[t++] = A[j++];
    i = p; t = 0;
    while(i <= r)
    {
        cnt++;
        if(cnt == k)
            cout << tmp[t] << '\n';
        A[i++] = tmp[t++];
    }
}

void merge_sort(int p, int r)
{
    if(p < r)
    {
        int q = (p+r)/2;
        merge_sort(p, q);
        merge_sort(q+1, r);
        merge(p, q, r);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    A = new int[n];
    tmp = new int[n];
    for(int i = 0; i < n; i++)
        cin >> A[i];
    
    cnt = 0;
    merge_sort(0,n-1);
    if(cnt < k)
        cout << -1 << '\n';
    return 0;
}