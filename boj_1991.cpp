//<1991>번 : <트리 순회>
#include <iostream>

using namespace std;

int lc[30] = {};
int rc[30] = {};

void preorder(int cur) {
    if(cur == 0) return;

    cout << (char)(cur + 'A' - 1);
    preorder(lc[cur]);
    preorder(rc[cur]);
}

void inorder(int cur) {
    if(cur == 0) return;

    inorder(lc[cur]);
    cout << (char)(cur + 'A' - 1);
    inorder(rc[cur]);
}

void postorder(int cur) {
    if(cur == 0) return;

    postorder(lc[cur]);
    postorder(rc[cur]);
    cout << (char)(cur + 'A' - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        char a, b, c;
        cin >> a >> b >> c;
        int p = a - 'A' + 1;
        if(b == '.') lc[p] = 0; 
        else lc[p] = b - 'A' + 1;
        if(c == '.') rc[p] = 0;
        else rc[p] = c - 'A' + 1;
    }

    preorder(1); cout << '\n';
    inorder(1); cout << '\n';
    postorder(1); cout << '\n';

    return 0;
}