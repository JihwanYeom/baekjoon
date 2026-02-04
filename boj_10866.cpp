//<10866>번 : <덱>
#include <bits/stdc++.h>
using namespace std;

int d[30000];
int f = 15000, b = 15000;

void push_front(int x) {
    f--;
    d[f] = x;
}

void push_back(int x) {
    d[b] = x;
    b++;
}

int pop_front() {
    if(f == b) return -1;
    int r = d[f];
    f++;
    return r; 
}

int pop_back() {
    if(f == b) return -1;
    b--;
    return d[b];
}

int size() {
    return b-f;
}

int empty() {
    if(f == b) return 1;
    return 0;
}

int front() {
    if(f == b) return -1;
    return d[f];
}

int back() {
    if(f == b) return -1;
    return d[b-1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    string s;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s.compare("push_front") == 0) {
            cin >> m;
            push_front(m);
        }
        else if(s.compare("push_back") == 0) {
            cin >> m;
            push_back(m);
        }
        else if(s.compare("pop_front") == 0) {
            cout << pop_front() << '\n';
        }
        else if(s.compare("pop_back") == 0) {
            cout << pop_back() << '\n';
        }
        else if(s.compare("size") == 0) {
            cout << size() << '\n';
        }
        else if(s.compare("empty") == 0) {
            cout << empty() << '\n';
        }
        else if(s.compare("front") == 0) {
            cout << front() << '\n';
        }
        else if(s.compare("back") == 0) {
            cout << back() << '\n';
        }
    }

    return 0;
}
