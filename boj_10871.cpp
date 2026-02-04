//<10871>번 : <X보다 작은 수>
#include <iostream>

using namespace std;

int main()
{
	int N = 0, X = 0;
    int A[10000] = {};
    cin >> N >> X;
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        if(X > A[i])
            cout << A[i] << ' ';
    }
    cout << '\n';
    return 0;
}