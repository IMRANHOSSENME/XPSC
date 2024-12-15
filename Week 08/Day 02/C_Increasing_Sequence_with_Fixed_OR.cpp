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
    ll n;
    cin >> n;
    deque<ll> ans;
    for (int i = 0; i <= __lg(n); i++)
    {
        if ((n >> i) & 1)
        {
            ll data = n - (1LL << i);
            if (data > 0)
            {
                ans.push_front(data);
            }
        }
    }
    ans.push_back(n);
    print ans.size() << nl;

    for (auto i : ans)
    {
        print i << " ";
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
