//<5086>번 : <배수와 약수>
#include <iostream>

using namespace std;

int main()
{
    int A, B;
    while(true)
    {
        cin >> A >> B;
        if(A == 0 && B == 0)
            return 0;
        if(A%B == 0)
            cout << "multiple" << '\n';
        else if(B%A == 0)
            cout << "factor" << '\n';
        else
            cout << "neither" << '\n';
    }
}