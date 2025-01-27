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

const int N = 1e5 + 5;

void solution()
{
    int ans = 0, pos = 0, len = 1, n, k;
    vi v(N);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            pos = i;
        }
    }
    for (int i = pos + 1, k = 2; i <= n; i++)
    {
        if (v[i] == k)
        {
            len++;
            k++;
        }
    }
    ans = (n - len + k - 1) / k;
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
