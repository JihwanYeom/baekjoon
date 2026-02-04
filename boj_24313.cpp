//<24313>번 : <알고리즘 수업 - 점근적 표기1>
#include <iostream>

using namespace std;

int main()
{
    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;
    cout << (c >= a1) && (c*n0 >= a1*n0 + a0);
    return 0;
}