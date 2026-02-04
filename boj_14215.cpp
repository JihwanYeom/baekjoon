//<14215>번 : <세 막대>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, l;
    cin >> a >> b >> c;
    
    l = a;
    if (l < b) l = b;
    if (l < c) l = c;

    if(a+b+c-l <= l)
        cout << (a+b+c-l)*2 - 1 << '\n';
    else
        cout << a+b+c << '\n';

    return 0;
}