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
    string s, t;
    cin >> s >> t;

    if (s == t)
    {
        print "YES" << nl;
        return;
    }

    int in = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            in = i;
            break;
        }
    }

    if (in != -1)
    {
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                if (in > i)
                {
                    ok = false;
                    break;
                }
            }
        }
        print(ok ? "YES" : "NO") << nl;
    }
    else
    {
        print "NO" << nl;
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
