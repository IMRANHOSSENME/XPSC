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
    string x, y;
    cin >> x >> y;

    int ans = 0;
    char a = x[x.size() - 1], b = y[y.size() - 1];

    if (a == 'M' && b == 'S')
    {
        ans = 1;
    }
    else if (a == 'S' && b == 'M')
    {
        ans = -1;
    }
    else if (a == 'L' && b == 'M')
    {
        ans = 1;
    }
    else if (a == 'M' && b == 'L')
    {
        ans = -1;
    }

    if (a == b)
    {
        int asz = x.size(), bsz = y.size();
        if (a == 'S')
        {
            if (asz > bsz)
                ans = -1;
            else if (asz < bsz)
                ans = 1;
            else
                ans = 0;
        }
        else if (a == 'L')
        {
            if (asz > bsz)
                ans = 1;
            else if (asz < bsz)
                ans = -1;
            else
                ans = 0;
        }
        else
            ans = 0;
    }

    if (ans == 1)
    {
        print '>' << nl;
    }
    else if (ans == -1)
    {
        print '<' << nl;
    }
    else
    {
        print '=' << nl;
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
