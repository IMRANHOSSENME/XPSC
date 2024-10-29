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
    map<string, vector<int>> mp;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            mp[s].push_back(i);
        }
    }

    vi ans(3);
    for (auto [x, y] : mp)
    {
        vi v = y;
        if (v.size() == 1)
        {
            ans[v[0]] += 3;
        }
        else if (v.size() == 2)
        {
            ans[v[0]]++;
            ans[v[1]]++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        print ans[i]  << " ";
    }
    print nl;
    
}

int main()
{
    fast_io;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
