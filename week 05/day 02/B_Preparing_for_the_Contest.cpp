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
    int f = n - k;

    if (k == 0)
    {
        for (int i = n; i >=1; i--)
        {
            print i << " ";
        }
    }
    else
    {
        for (int i = f; i <= n; i++)
        {
            print i << " ";
        }
        for (int i = f-1; i >= 1; i--)
        {
            print i << " ";
        }
    }

    print nl;
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
