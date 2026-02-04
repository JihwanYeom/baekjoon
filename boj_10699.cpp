//<10699>번 : <오늘 날짜>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);
    printf("%04d-%02d-%02d\n", t->tm_year+1900, t->tm_mon+1, t->tm_mday);

    return 0;
}