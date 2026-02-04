//<1546>번 : <평균>
#include <iostream>

using namespace std;

int main()
{   
    int N = 0, max = 0;
    float sum = 0.0, avg= 0.0;
    float score[1000] = {};
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> score[i];
        if(max < score[i])
            max = score[i];
    }
    for(int i = 0; i < N; i++)
        sum += score[i]/max*100;
    avg = sum/N;
    cout << avg << '\n';
    return 0;
}