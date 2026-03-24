//<2083>번 : <럭비 클럽>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string name;
    int age, weight;
    while(true) {
        cin >> name >> age >> weight;
        if(name == "#" && weight == 0 && age == 0)
            break;
        if(age > 17 || weight >= 80) {
            cout << name << " Senior\n";
        }
        else {
            cout << name << " Junior\n";
        }
    }

    return 0;
}
