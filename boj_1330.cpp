//<1330>번 : <두 수 비교하기>
#include <iostream>

using namespace std;

int main()
{
	int A = 0, B = 0;
	cin >> A >> B;
	if (A > B)
		cout << '>' << '\n';
	else if (A < B)
		cout << '<' << '\n';
	else
		cout << "==" << '\n';
	return 0;
}