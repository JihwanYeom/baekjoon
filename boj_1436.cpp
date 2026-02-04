//<1436>번 : <영화감독 숌>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N = 0, i, cnt = 0;
    string str;
    scanf("%d", &N);
    for(i = 666; cnt < N; i++)
    {
        str = to_string(i);
        if(str.find("666") != string::npos)
            cnt++;
    }
    printf("%d", i-1);
    return 0;
}