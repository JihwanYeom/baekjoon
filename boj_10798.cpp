//<10798>번 : <세로읽기> 
#include <iostream>
#include <string>

using namespace std;

int main (){
    string str[5] = {};
    int len = 0;
    for(int i = 0; i < 5; i++)
        cin >> str[i];
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(i < str[j].length()) //string 범위 안에서만 출력하기
                cout << str[j][i];
        }
    }
    return 0;
}