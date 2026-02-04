//<2754>번 : <학점계산>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string grade;
    double score;
    cin >> grade;
    if(grade[0] == 'A') score = 4.0;
    else if(grade[0] == 'B') score = 3.0;
    else if(grade[0] == 'C') score = 2.0;
    else if(grade[0] == 'D') score = 1.0;
    else if(grade[0] == 'F') score = 0.0;

    if(grade[1] == '+') score += 0.3;
    if(grade[1] == '-') score -= 0.3;

    cout.setf(ios::fixed);
    cout.precision(1);
    cout << score << '\n';

    return 0;
}