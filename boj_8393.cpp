//<8393>번 : <합>
#include <iostream>

using namespace std;

int main()
{
	int N = 0, sum = 0;
    cin >> N;
    for(int i = 0; i <= N ; i++){
        sum += i;
    }
    cout << sum << '\n';
    return 0;
}