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
    int n, s;
    cin >> n >> s;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    if (sum < s)
    {
        print - 1 << nl;
        return;
    }
    if (sum == s)
    {
        print 0 << nl;
        return;
    }

    int l = 0;
    int r = 0;
    int ans = 0;
    ll cs = 0;

    while (r < n)
    {
        cs += v[r];
        while (cs > s)
        {
            cs -= v[l];
            l++;
        }
        if (cs == s)
        {
            ans = max(ans, r - l + 1);
        }

        r++;
    }

    if (ans > 0)
    {
        print n - ans << nl;
    }
    else
    {
        print - 1 << nl;
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
