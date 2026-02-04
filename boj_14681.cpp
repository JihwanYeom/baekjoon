//<14681>번 : <사분면 고르기>
#include <iostream>

using namespace std;

int main()
{
	int x = 0, y = 0;
    cin >> x >> y;
    if(x*y > 0) {
        if(x > 0)
            cout << 1;
        else
            cout << 3;
    }
    else {
        if(y > x)
            cout << 2;
        else
            cout << 4;
    }
    return 0;
}