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
    int n, m, h;
    cin >> n >> m >> h;

    vll c(n), p(m);

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
    }

    sort(c.rbegin(), c.rend());
    sort(p.rbegin(), p.rend());
    ll result = 0;
    int i = 0;

    while (i < n && i < m)
    {
        ll en = min(c[i], p[i] * h);
        result += en;
        i++;
    }

    print result << nl;
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
