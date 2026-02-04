//<3052>번 : <나머지>
#include <iostream>

using namespace std;

int main()
{
	int N = 0, len = 0, exist = 0;
    int rem[42] = {};
    for(int i = 0; i < 10; i++){
        cin >> N;
        for(int j = 0; j < len; j++){
            if(rem[j] == N%42){
                exist = 1;
                break;
            }
        }
        if(exist == 0){
            rem[len] = N%42;
            len++;
        }
        exist = 0;
    }
    cout << len << '\n';
    return 0;
}