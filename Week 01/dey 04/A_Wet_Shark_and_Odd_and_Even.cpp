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

    ll totalsum = 0;
    ll totalodd = LONG_MAX;

    for (int i = 0; i < n; i++)
    {
        totalsum += v[i];
        if (v[i] % 2 != 0)
        {
            if (totalodd > v[i])
            {
                totalodd = v[i];
            }
        }
    }

    if (totalsum % 2 != 0)
    {
        totalsum -= totalodd;
    }

    print totalsum << nl;
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
