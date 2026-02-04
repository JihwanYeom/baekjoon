//<10101>번 : <삼각형 외우기>
#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    cin >> A >> B >> C;
    if((A+B+C) != 180)
        cout << "Error" << '\n';
    else if(A != B && B != C && C != A)
        cout << "Scalene" << '\n';
    else if(A !=60 || B != 60 || C != 60)
        cout << "Isosceles" << '\n';
    else
        cout << "Equilateral" << '\n';
    return 0;
}