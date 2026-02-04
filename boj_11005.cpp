//<11005>번 : <진법 변환2>
#include <iostream>
#include <string>

using namespace std;

void change(int N, int B);

int main()
{
    int N, B;
    cin >> N >> B;
    change(N,B);
    return 0;
}

void change(int N, int B)
{
    if(N == 0)
        return;
    change(N/B,B);
    if(N%B < 10)
        cout << N%B;
    else
        cout << (char)(N%B - 10 + 'A');
}