//<25304>번 : <영수증>
#include <iostream>

using namespace std;

int main()
{
	int X = 0, N = 0, a = 0, b = 0, sum = 0;
    cin >> X >> N;
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        sum += a * b;
    }
    if(X == sum)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}