//<5073>번 : <삼각형과 세 변>
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, l = 0; 
    
    while(1)
    {
        cin >> a >> b >> c;

        l = a;
        if(l < b) l = b;
        if(l < c) l = c;

        if(a == 0 && b == 0 && c == 0)
            break;
        else if((a+b+c-l) <= l)
            cout << "Invalid" << '\n';
        else if(a == b && b == c)
            cout << "Equilateral" << '\n';
        else if(a == b || b == c || c == a)
            cout << "Isosceles" << '\n';
        else
            cout << "Scalene" << '\n';
    }   
    return 0;
}