//<2869>번 : <달팽이는 올라가고 싶다>
#include <iostream>

using namespace std;

int main()
{
    int A, B, V, D;
    cin >> A >> B >> V;
    
    if((V-A)%(A-B) == 0)
        D = (V-A)/(A-B)+1;
    else
        D = (V-A)/(A-B)+2 ;
    cout << D << '\n';
    return 0;
}