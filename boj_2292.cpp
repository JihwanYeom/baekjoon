//<2292>번 : <벌집>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N = 0, x = 0, dx = 6, i = 0;
    cin >> N;
    for(x = 1, i = 1; x < N; dx+=6, i++)
        x += dx;
    cout << i << endl;
    return 0;
}

/*
1 = 0
2 ~ 7(6칸) = 1
8 ~ 19(12칸) = 2
20 ~ 37(18킨) = 3
*/