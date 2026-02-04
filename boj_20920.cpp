//<20920>번 : <영단어 암기는 괴로워>
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    if (a.first.length() != b.first.length()) {
        return a.first.length() > b.first.length();
    }
    return a.first < b.first;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, int> word;
    int n, m;
    string in;
    cin >> n >> m;
    for(int i = 0 ; i < n; i++)
    {
        cin >> in;
        if(in.length() >= m)
            word[in]++;
    }
    vector<pair<string, int>> note(word.begin(), word.end());
    sort(note.begin(), note.end(), compare);
    for(pair w : note)
        cout << w.first << '\n';
    return 0;
}