//<2908>번 : <상수>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string A = "", B = "";
    cin >> A >> B;
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    for(int i = 0; i < 3; i++){
        if(A[i] > B[i]){
            cout << A << '\n';
            break;
        }
        else if(A[i] < B[i]){
            cout << B << '\n';
            break;
        }
        else
            continue;
    }
    return 0;
}