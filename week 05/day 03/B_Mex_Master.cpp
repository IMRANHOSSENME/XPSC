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
    int n;
    cin >> n;
    vi v(n);
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }

    if (zero == 0)
    {
        print 0 << nl;
        return;
    }

    // print zero << " " << one<< nl;

    if (one >= zero - 1)
    {
        print 0 << nl;
    }
    else
    {
        int s = *max_element(v.begin(), v.end());
        if (s == 1)
        {
            print 2 << nl;
        }
        else
        {
            print 1 << nl;
        }
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
