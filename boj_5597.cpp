//<5597>번 : <과제 안 내신 분..?>
#include <iostream>

using namespace std;

int main()
{
	int students[30] = {};
    int n = 0;
    for(int i = 0; i < 28; i++){
        cin >> n;
        students[n-1] = 1;
    }
    for(int i = 0; i < 30; i++){
        if(students[i] == 0)
            cout << i+1 << '\n';
    }
    return 0;
}