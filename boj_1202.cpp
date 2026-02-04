//<1202>번 : <보석 도둑>
// 최종 답안(sort 및 heap 활용)
#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> gems;
vector<int> bags;
priority_queue<int> pq;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        pair<int, int> gem;
        cin >> gem.first >> gem.second;
        gems.push_back(gem);
    }
    
    for(int i = 0; i < k; i++)
    {
        int b; cin >> b;
        bags.push_back(b);
    }

    sort(gems.begin(), gems.end());
    sort(bags.begin(), bags.end());

    long long sum = 0;
    int idx = 0;
    for(int i = 0; i < k; i++)
    {
        int cur_size = bags[i];
        while(idx < n && gems[idx].first <= cur_size)
        {
            pq.push(gems[idx].second); idx++;
        }

        if(!pq.empty())
        {
            sum += pq.top(); pq.pop();
        }
    }
    cout << sum << '\n';
    return 0;
}

/*
#1차 답안 (큰 가방부터 채우기)
#include <bits/stdc++.h>

using namespace std;

typedef struct Jewel
{
    int v;
    int m;
}Jewel;

struct compareByMess {
	bool operator()(const Jewel& j1, const Jewel& j2) {
		return j1.m < j2.m;
	}
};

struct compareByValue {
	bool operator()(const Jewel& j1, const Jewel& j2) {
		return j1.v > j2.v;
	}
};

priority_queue<Jewel, vector<Jewel>, compareByValue> inBag;
priority_queue<Jewel, vector<Jewel>, compareByMess> jewels;
priority_queue<int> bags;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        Jewel j;
        cin >> j.m >> j.v;
        jewels.push(j);
    }
    
    bags.push(0);
    for(int i = 0; i < k; i++)
    {
        int b;
        cin >> b;
        bags.push(b);
    }

    long long sum = 0;
    while(!jewels.empty())
    {
        Jewel j = jewels.top();
        jewels.pop();

        if(!bags.empty() && bags.top() >= j.m)
        {
            bags.pop();
            inBag.push(j);
            sum += j.v;
        }
        else if(!inBag.empty() && inBag.top().v < j.v)
        {
            sum -= inBag.top().v;
            sum += j.v;
            inBag.pop();
            inBag.push(j);
        }
    }

    cout << sum << '\n';

    return 0;
}
*/

/*
#2차 답안 (작은 가방부터 채우기, heap만 사용)
#include <bits/stdc++.h>

using namespace std;

priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> gems;
priority_queue<int> bag;
priority_queue<int, vector<int>, greater<int>> bags;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        pair<int, int> gem;
        cin >> gem.first >> gem.second;
        gems.push(gem);
    }
    
    for(int i = 0; i < k; i++)
    {
        int b;
        cin >> b;
        bags.push(b);
    }

    long long sum = 0;
    while(!bags.empty())
    {
        int cur_size = bags.top();
        bags.pop();

        while(!gems.empty() && gems.top().first <= cur_size)
        {
            pair<int, int> gem = gems.top(); gems.pop();
            bag.push(gem.second);
        }

        if(!bag.empty())
        {
            sum += bag.top();
            bag.pop();
        }
    }
    cout << sum << '\n';
    return 0;
}
*/

