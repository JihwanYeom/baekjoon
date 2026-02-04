//<11022>번 : <A+B - 8>
#include <iostream>

using namespace std;

int main()
{
	int T = 0, A = 0, B = 0;
    cin >> T;
    for(int i = 1; i <= T; i++){
        cin >> A >> B;
        cout << "Case #" << i << ": " << A << " + " << B << " = " << A+B << '\n';
    }
    return 0;
}