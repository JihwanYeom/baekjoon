//<17450>번 : <과자 사기>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char name[3] = {'S', 'N', 'U'};
    int max_idx = 0;
    float max_k = 0;
    int a, b;
    for(int i = 0; i < 3; i++) {
        cin >> a >> b;
        int discount = 0;
        if(a*10 >= 5000) discount = 500;
        float k = b*10 / (float)(a*10 - discount);
        if(max_k < k) {
            max_k = k;
            max_idx = i;
        }
    }
    cout << name[max_idx] << '\n';

    return 0;
}
