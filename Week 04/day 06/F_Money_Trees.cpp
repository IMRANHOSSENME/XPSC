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
    int n, k;
    cin >> n >> k;
    vi v(n), v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    int l = 0, r = 0, sum = 0;
    int ans = 0;

    while (r < n)
    {
        sum += v[r];
        if (l < r && v1[r - 1] % v1[r] != 0)
        {
            while (l < r && v1[r - 1] % v1[r] != 0)
            {
                sum -= v[l];
                l++;
            }
        }
        while (sum > k)
        {
            sum -= v[l];
            l++;
        }

        ans = max(ans, r - l + 1);
        r++;
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
