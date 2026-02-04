
//<25314>번 : <코딩은 체육과목 입니다>
#include <iostream>

using namespace std;

int main()
{
	int N = 0;
    cin >> N;
    for(int i = 0; i < N; i += 4)
        cout << "long ";
    cout << "int" << '\n';
    return 0;
}