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
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n <= 3)
    {
        print 0 << nl;
        return;
    }

    sort(v.begin(), v.end());

    int c1 = v[n - 1] - v[2];
    int c2 = v[n - 2] - v[1];
    int c3 = v[n - 3] - v[0];

    int re = min({c1, c2, c3});

    print re << nl;
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
