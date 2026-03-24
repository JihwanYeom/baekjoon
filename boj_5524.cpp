//<5524>번 : <입실 관리>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string in;
        cin >> in;
        for(int j = 0; j <= in.length(); j++) {
            if(in[j] >= 'A' && in[j] <= 'Z') {
                in[j] += 32;
            }   
        }
        cout << in << '\n';
    }

    return 0;
}
