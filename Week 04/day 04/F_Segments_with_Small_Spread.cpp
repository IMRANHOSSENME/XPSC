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
    ll k;
    cin >> n >> k;
    vll v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 0;
    print nl;
    ll ans = 0;
    multiset<ll> ml;

    while (r < n)
    {
        ml.insert(v[r]);
        ll mn = *ml.begin(), mx = *ml.rbegin();
        if (mx - mn <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (mx - mn > k)
            {
                ml.erase(ml.find(v[l]));
                l++;
                if (!ml.empty())
                {
                    mn = *ml.begin();
                    mx = *ml.rbegin();
                }
            }
            if (mx - mn <= k)
            {
                ans += (r - l + 1);
            }
        }
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
