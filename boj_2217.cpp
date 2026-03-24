//<2217>번 : <로프>
#include <iostream>
#include <algorithm>
using namespace std;

int rope[100000];
int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> rope[i];
    }
    sort(rope, rope+n);
    int max_weight = 0;
    for(int i = 0; i < n; i++) {
        max_weight = max(max_weight, rope[i]*(n-i));
    }
    cout << max_weight << '\n';
    return 0;
}
