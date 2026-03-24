//<20499>번 : <Darius님 한타 안 함?>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k, d, a;
    scanf("%d/%d/%d", &k, &d, &a);

    if(k + a < d || d == 0) {
        cout << "hasu\n";
    }
    else {
        cout << "gosu\n";
    }

    return 0;
}