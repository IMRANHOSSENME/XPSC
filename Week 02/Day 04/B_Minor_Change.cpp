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
    string pr, ne;
    getline(cin, pr);
    getline(cin, ne);

    int ans = 0;
    for (int i = 0; i < pr.size(); i++)
    {
        if (pr[i] != ne[i])
        {
            ans++;
        }
    }

    cout << ans;
    print nl;
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
