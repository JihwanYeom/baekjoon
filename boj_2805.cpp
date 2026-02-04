//<2805>번 : <나무 자르기>
#include <bits/stdc++.h>
using namespace std;

int h[1000000] = {};
int n, m;
int max_h = 0;

int bs(int l, int r) {
    int result = 0;

    while (l <= r) {
        int mid = (l + r) / 2;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            if (h[i] > mid) {
                sum += h[i] - mid;
            }
        }

        if (sum >= m) {
            result = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> h[i];
        max_h = max(max_h, h[i]);
    }

    cout << bs(0,max_h) << '\n';

    return 0;
}