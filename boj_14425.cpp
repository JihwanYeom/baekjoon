//<14425>번 : <문자열 집합>
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, count = 0;
    string input;
    unordered_set<string> s;
    
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        cin >> input;
        s.insert(input);
    }
    for(int i = 0; i < M; i++)
    {
        cin >> input;
        if(s.find(input) != s.end())
            count++;
    }
    cout << count;
    return 0;
}