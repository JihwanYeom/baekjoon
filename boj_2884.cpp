//<2884>번 : <알람 시계>
#include <iostream>

using namespace std;

int main()
{
    int H = 0, M = 0;
    cin >> H >> M;
    if(M < 45){
        if(H == 0){
            H += 24;
        }
        M += 15;
        H--;
    }
    else {
        M -= 45;
    }
    cout << H << ' ' << M << endl;
	return 0;
}