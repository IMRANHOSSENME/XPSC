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
    int x, y;
    cin >> x >> y;

    if (x == 0 || y == 0)
    {
        print 0 << nl;
        return;
    }
    else if (x == 1 && y == 1)
    {
        print 1 << nl;
        return;
    }
    else if (x == 2 && y == 2)
    {
        print 2 << nl;
        return;
    }
    else if (x == y)
    {
        int sum = 0;

        for (int i = 3; i <= y; i += 3)
        {
            sum += 3;
        }
        if (x - sum == 1)
        {
            print 1 << nl;
            return;
        }
        else if (x - sum == 2)
        {
            print 2 << nl;
            return;
        }
        else
        {
            print 0 << nl;
            return;
        }
    }
    else
    {
        int re = min(x, y);

        int sum = 0;

        for (int i = 3; i <= re; i += 3)
        {
            sum += 3;
        }
        print re - sum << nl;
        return;
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
