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
    map<string, string> ans, dami;

    for (int i = 0; i < n; i++)
    {
        string x, y;
        cin >> x >> y;
        if (dami.find(x) != dami.end())
        {
            string s = dami[x];
            ans[s] = y;
            dami.erase(x);
            dami[y] = s;
        }
        else
        {
            ans[x] = y;
            dami[y] = x;
        }
    }
    print ans.size() << nl;

    for (auto [x, y] : ans)
    {
        print x << " " << y << nl;
    }
}

int main()
{
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
