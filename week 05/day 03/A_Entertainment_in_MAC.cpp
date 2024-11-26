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
    string s, s1;
    cin >> s;
    s1 = s;
    reverse(s1.begin(), s1.end());

    if (s <= s1)
    {
        if (n % 2 == 0)
        {
            print s << nl;
        }
        else
        {
            print s << s1 << nl;
        }
    }
    else
    {
        if (n % 2 == 1)
        {
            print s1 << nl;
        }
        else
        {
            print s1 << s << nl;
        }
    }

    // print s<<nl<<s1<<nl;
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
