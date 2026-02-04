//<2903>번 : <중앙 이동 알고리즘>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int side_dot = 2;
    int dot = 0;
    int N = 0;
    cin >> N;
    for(int i = 0; i < N; i++)
        side_dot += side_dot-1;
    dot = (side_dot * side_dot);
    cout << dot << '\n';
    return 0;
}