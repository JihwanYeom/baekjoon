//<10814>번 : <나이순 정렬>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

typedef struct Member
{
    int age;
    string name;
}Member;

bool compare(Member a, Member b)
{
    return a.age < b.age;
}

int main()
{
    Member* m = new Member[100000];
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> m[i].age >> m[i].name;
    stable_sort(m, m+N, compare);
    for(int i = 0; i < N; i++)
        cout << m[i].age << ' ' << m[i].name << '\n';
    return 0;
}