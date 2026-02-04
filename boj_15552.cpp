//<문제번호>번 : <제목>
#include <iostream>

using namespace std;

int main()
{
	int T = 0, A = 0, B = 0;
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> A >> B;
        cout << A + B << '\n';
    }
    return 0;
}