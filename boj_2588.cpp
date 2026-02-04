//<2588>번 : <곱셈>
#include <iostream>

using namespace std;

int main()
{
	int A = 0, B = 0;
	cin >> A >> B;
	cout << A*(B%10) << '\n'
		 << A*((int)B/10%10) << '\n'
		 << A*((int)B/100) << '\n'
		 << A*B << '\n';
	return 0;
}