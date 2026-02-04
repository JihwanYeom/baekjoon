//<10818>번 : <최소, 최대>
#include <iostream>

using namespace std;

int main()
{
	int N = 0, max = -1000000, min = 1000000, X = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> X;
        if (X > max)
            max = X;
        if (X < min)
            min = X;
    }
    cout << min << ' ' << max << '\n';
    return 0;
}