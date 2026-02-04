//<1181>번 : <단어 정렬>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
    if(a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main()
{
    string w[20000];
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> w[i];
        for(int j = 0; j < i; j++)
        {
            if(w[j] == w[i])
            {
                i--; N--;
                break;
            }
        }
    }
    sort(w, w+N, compare);
    for(int i = 0; i < N; i++)
        cout << w[i] << '\n';
    return 0;
}