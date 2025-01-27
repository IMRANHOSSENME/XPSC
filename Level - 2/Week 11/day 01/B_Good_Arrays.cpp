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
    vi v(n + 1);
    ll sum = 0, cntone = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            cntone++;
        }
        sum += v[i] - 1;
    }

    if (n == 1)
    {
        print "NO" << nl;
        return;
    }

    if (sum >= cntone)
    {
        print "YES" << nl;
    }
    else
    {
        print "NO" << nl;
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
