//<16710>번 : <오늘의 날짜는?>
#include <bits/stdc++.h>
using namespace std;

time_t timer = time(NULL);
struct tm* t = gmtime(&timer);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int year = 1900 + t->tm_year;
    int month = 1 + t->tm_mon;
    int day = t->tm_mday;

    printf("%02d\n%02d\n%02d", year, month, day);

    return 0;
}