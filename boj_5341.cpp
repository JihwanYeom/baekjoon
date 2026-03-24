//<5341>번 : <Pyramids>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while(true) {
        cin >> n;
        if(n == 0) break;
        int cnt = 0;
        for(int i = 1; i<= n; i++) {
            cnt += i;
        }
        cout << cnt << '\n';
    }

    return 0;
}
