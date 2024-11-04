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
    int n, m;
    cin >> n >> m;
    map<int, set<int>> mp;
    for (int i = 1; i <= n; i++)
    {
        int data;
        cin >> data;
        mp[data].insert(i);
    }

    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        if ((mp.find(x) == mp.end()) || (mp.find(y) == mp.end()))
        {
            print "NO" << nl;
        }
        else
        {
            int l, r;
            l = *mp[x].begin();
            r = *mp[y].rbegin();

            if (l < r)
            {
                print "YES" << nl;
            }
            else
            {
                print "NO" << nl;
            }
        }
    }
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
