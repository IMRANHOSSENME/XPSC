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
    int x, y, z;
    cin >> x >> y >> z;

    float tp = x * 1 + y * 0.5;
    float op = z * 1 + y * 0.5;

    int gm = 4 - (x + y + z);

    float maxgm = tp + gm * 1;

    if (maxgm > op)
    {
        print "Yes" << nl;
    }
    else
    {
        print "No" << nl;
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
