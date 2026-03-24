//<32775>번 : <가희와 4시간으 벽 1>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int s, f;
    cin >> s >> f;
    if(s > f) {
        cout << "flight\n";
    }
    else cout << "high speed rail\n";

    return 0;
}