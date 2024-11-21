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
    int l = 0, r = 0, ans = INT_MAX;
    ll sum = 0;

    while (r < n)
    {
        sum += v[r];

        while (sum >= m)
        {
            ans = min(ans, r - l + 1);
            sum -= v[l];
            l++;
        }
        r++;
    }

    if (ans == INT_MAX)
        print -1 << nl;
    else
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
