//<2525>번 : <오븐 시계>
#include <iostream>

using namespace std;

int main()
{
	int A = 0, B = 0, C = 0;
    cin >> A >> B >> C;
    A += C/60;
    B += C%60;
    if(B >= 60){
        B -= 60;
        A++;
    }
    if(A >= 24)
        A -= 24;
    cout << A << ' ' << B << endl;
    return 0;
}