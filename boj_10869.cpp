//<10869>번 : <사칙연산>
#include <iostream>

using namespace std;

int main()
{
	int A = 0, B = 0;
	cin >> A >> B;
	cout << A+B << '\n' 
		 << A-B << '\n' 
		 << A*B << '\n' 
		 << (int)(A/B) << '\n' 
		 << A%B << '\n';
	return 0;
}