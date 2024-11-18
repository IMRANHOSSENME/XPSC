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
    int n, c;
    cin >> n >> c;
    vi v(n), costs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        costs[i] = v[i] + (i + 1);
    }
    sort(costs.begin(), costs.end());
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (c >= costs[i])
        {
            c -= costs[i];
            ans++;
        }
        else
        {
            break;
        }
    }

    print ans << nl;
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
