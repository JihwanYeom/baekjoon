//<2745>번 : <진법 변환>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int B = 0; 
    string N = "";
    int num = 0, digit = 1;
    cin >> N >> B;
    for(int i = N.length()-1; i >= 0; i--){
        if(N[i] >= '0' && N[i] <= '9')
            num += (N[i] - '0')*digit;
        else if(N[i] >= 'A', N[i] <= 'Z')
            num += (N[i] - 'A' + 10)*digit;
        digit *= B;
    }
    cout << num << '\n';
    return 0;
}