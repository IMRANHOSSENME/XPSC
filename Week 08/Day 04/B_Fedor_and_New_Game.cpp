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

int Bits(int x)
{
    return __builtin_popcount(x);
}

void solution()
{
    int n, m, k;
    cin >> n >> m >> k;
    vi v(m + 1);
    for (int i = 0; i <= m; i++)
    {
        cin >> v[i];
    }

    int ans = 0;

    for (int i = 0; i < m; i++)
    {
        int c = v[m] ^ v[i];
        if (Bits(c) <= k)
        {
            ans++;
        }
    }

    print ans;

    print nl;
}

int main()
{
    fast_io;
    int t = 1;
    while (t--)
    {
        solution();
    }
    return 0;
}
