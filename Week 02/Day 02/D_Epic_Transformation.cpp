#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define vpll vector<pair<ll, ll>>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define nl "\n"
#define dq deque<int>
#define print cout <<

void solution()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int data;
        cin >> data;
        mp[data]++;
    }

    priority_queue<int> pq;
    for (auto [x, y] : mp)
    {
        pq.push(y);
    }

    while (!pq.empty())
    {
        if (pq.size() < 2)
        {
            break;
        }
        int x, y;
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();

        x--;
        y--;

        if (x >= 1)
        {
            pq.push(x);
        }

        if (y >= 1)
        {
            pq.push(y);
        }
    }
    int ans = 0;
    while (!pq.empty())
    {
        ans += pq.top();
        pq.pop();
    }
    print ans << nl;
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
