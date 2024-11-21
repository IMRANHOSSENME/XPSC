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
    ll m;
    cin >> n >> m;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> mp;
    int l = 0, r = 0;
    ll ans = 0;
    int un = 0;

    while (r < n)
    {
        mp[v[r]]++;
        if (mp[v[r]] == 1)
        {
            un++;
        }

        while (un > m)
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0)
            {
                un--;
            }

            l++;
        }
        ans += (r - l + 1);
        r++;
        }

    print ans << nl;
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
