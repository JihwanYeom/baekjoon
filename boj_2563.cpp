//<2563>번 : <색종이>
#include <iostream>

using namespace std;

int main()
{
    int paper[100][100] = {};
	int N = 0, x1 = 0, y1 = 0, area = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> x1 >> y1;
        for(int x = x1; x < x1+10;x++){
            for(int y = y1; y < y1+10; y++){
                if(paper[y][x] == 0)
                    area++;
                paper[y][x] = 1;
            }
        }
    }
    cout << area << "\n"; 
    return 0;
}