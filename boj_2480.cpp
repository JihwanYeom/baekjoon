//<2480>번 : <주사위 세개>
#include <iostream>

using namespace std;

int main()
{
	int A = 0, B = 0, C = 0, P = 0;
    cin >> A >> B >> C;
    if(A == B && B == C)
        P += 10000 + A*1000;
    else if(A == B || B == C || C == A){
        P += 1000;
        if(A == B || A == C)
            P += A*100;
        else
            P += B*100;
    }
    else {
        if(A > B && A > C)
            P += A*100;
        else if(B > C)
            P += B*100;
        else
            P += C*100;
    }
    cout << P << endl;
    return 0;
}