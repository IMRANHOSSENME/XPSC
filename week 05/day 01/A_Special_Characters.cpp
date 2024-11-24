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

    if (n % 2 != 0)
    {
        print "NO" << nl;
    }
    else
    {
        int a = n / 2;
        print "YES" << nl;
        for (int i = 1; i <= a; i++)
        {
            if (i % 2 != 0)
            {
                print "AA";
            }
            else
            {
                print "BB";
            }
        }
        print nl;
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
