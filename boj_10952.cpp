//<10952>번 : <A+B - 5>
#include <iostream>

using namespace std;

int main()
{
    int A = 0, B = 0;
	while(true){
        cin >> A >> B;
        if(A == 0 && B == 0)
            break;
        cout << A + B << '\n';
    }
    return 0;
}