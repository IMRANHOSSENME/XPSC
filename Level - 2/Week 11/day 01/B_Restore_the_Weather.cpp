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
    vector<pair<int, int>> v(n);
    vi v1(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i].first = x;
        v[i].second = i;
    }

    

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());

    vi ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[v[i].second] = v1[i];
    }

    for (int i = 0; i < n; i++)
    {
        print ans[i] << " ";
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
