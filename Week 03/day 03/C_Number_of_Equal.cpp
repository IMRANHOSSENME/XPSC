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
    vi v(n), v1(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }
    int l = 0, r = 0;
    ll ans = 0;

    while (l < n && r < m)
    {
        int car = v[l], cnt1 = 0, cnt2 = 0;
        while (l < n && v[l] == car)
        {
            cnt1++;
            l++;
        }
        while (r < m && v1[r] < car)
        {
            r++;
        }

        while (r < m && v1[r] == car)
        {
            cnt2++;
            r++;
        }
        ans += (1LL * cnt1 * cnt2);
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
