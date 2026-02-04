//<25206>번 : <너의 평점은>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    double sumOfGrade = 0, credit = 0, sumOfCredit = 0;
    string subject = "", grade = "";
    for(int i = 0; i < 20; i++){
        cin >> subject >> credit >> grade;
        if(grade != "P"){
            sumOfCredit += credit;
            if(grade == "A+")
                sumOfGrade += 4.5*credit;
            else if(grade == "A0")
                sumOfGrade += 4.0*credit;
            else if(grade == "A0")
                sumOfGrade += 4.0*credit;
            else if(grade == "B+")
                sumOfGrade += 3.5*credit;
            else if(grade == "B0")
                sumOfGrade += 3.0*credit;
            else if(grade == "C+")
                sumOfGrade += 2.5*credit;
            else if(grade == "C0")
                sumOfGrade += 2.0*credit;
            else if(grade == "D+")
                sumOfGrade += 1.5*credit;
            else if(grade == "D0")
                sumOfGrade += 1.0*credit;
            else
                sumOfGrade += 0;
        }
    }
    cout << sumOfGrade/sumOfCredit << '\n';
    return 0;
}