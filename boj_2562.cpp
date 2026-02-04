//<2562>번 : <최댓값>
#include <iostream>

using namespace std;

int main()
{
	int N = 0, max = 0, idx = 0;
    for(int i = 1; i < 10 ; i++){
        cin >> N;
        if(N > max){
            max = N;
            idx = i;
        }
    }
    cout << max << '\n' << idx << '\n';
    return 0;
}