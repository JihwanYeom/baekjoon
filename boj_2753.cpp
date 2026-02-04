//<2753>번 : <윤년>
#include <iostream>

using namespace std;

int main()
{
	int year = 0;
    cin >> year;
    cout << ((year % 4 == 0 && year % 100 != 0) || (year%400 == 0));
    return 0;
}