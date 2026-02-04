//<2738>번 : <최댓값> 
#include <iostream>
#include <string>

using namespace std;

int main (){
    int N = 0, max = 0, row = 0, col = 0;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> N;
            if(N >= max){
                max = N;
                col = i+1;
                row = j+1;
            }
        }
    }
    cout << max << '\n' << col << ' ' << row;
    return 0;
}