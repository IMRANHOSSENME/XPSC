#include <bits/stdc++.h>
using namespace std;

const int B = 30;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define nl "\n"

void solution()
{
    int n, m;
    cin >> n >> m;
    vi v(n);
    vector<int> bits(B + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= B; k++)
        {
            if ((v[i] >> k) & 1)
            {
                bits[k]++;
            }
        }
    }

    ll ans = 0;
    for (int k = B; k >= 0; k--)
    {
        if (bits[k] == n)
        {
            ans += (1LL << k);
        }
        else
        {
            int need = n - bits[k];
            if (m >= need)
            {
                ans += (1LL << k);
                m -= need;
            }
        }
    }
    cout << ans << nl;
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
