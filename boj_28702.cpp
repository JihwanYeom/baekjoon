//<28702>번 : <FizzBuzz>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s[3];
    int out;
    for(int i = 0; i < 3; i++)
        cin >> s[i];
    
    for(int i = 0; i < 3; i++)
    {
        if( s[i][0] != 'F' && s[i][0] != 'B')
        {
            out = stoi(s[i])+3-i;
            break;
        }
    }

    if(out % 3 == 0 && out % 5 == 0)
        cout << "FizzBuzz\n";
    else if(out % 3 == 0)
        cout << "Fizz\n";
    else if(out % 5 == 0)
        cout << "Buzz\n";
    else
        cout << out << '\n';

    return 0;
}