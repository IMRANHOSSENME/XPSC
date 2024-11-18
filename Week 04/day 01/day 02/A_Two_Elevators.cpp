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
    int a, b, c;
    cin >> a >> b >> c;

    int f = abs(a - 1);
    int s = abs(b - c) + abs(c - 1);

    if (f < s)
    {
        print 1 << nl;
    }
    else if (f > s)
    {
        print 2 << nl;
    }
    else
    {
        print 3 << nl;
    }
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
