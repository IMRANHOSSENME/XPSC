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
    int n, m;
    cin >> n >> m;

    map<string, string> mp1;

    for (int i = 0; i < n; i++)
    {
        string x, y;
        cin >> x >> y;
        mp1[y] = x;
    }

    for (int i = 0; i < m; i++)
    {
        string cm, ip;
        cin >> cm >> ip;
        ip.pop_back();

        print cm << " " << ip << ';' << " #" << mp1[ip] << nl;
    }
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
