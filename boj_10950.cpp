//<10950>번 : <A+B - 3>
#include <iostream>

using namespace std;

int main()
{
	int T = 0, A = 0, B = 0;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        cin >> A >> B;
        cout << A + B << '\n';
    }
    return 0;
}