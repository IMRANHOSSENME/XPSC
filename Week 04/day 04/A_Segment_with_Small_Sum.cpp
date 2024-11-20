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
    ll n, k;
    cin >> n >> k;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 0, ans = 0;
    ll sum = 0;

    while (r < n)
    {
        sum += v[r];
        if (sum <= k)
        {
            ans = max(ans, r - l + 1);
        }
        else
        {
            sum -= v[l];
            l++;
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
