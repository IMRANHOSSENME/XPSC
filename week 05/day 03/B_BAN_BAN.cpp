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
    string s = "";

    for (int i = 0; i < n; i++)
    {
        s += "BAN";
    }

    int l = 1, r = s.size() - 1;
    vector<pii> v;

    if (n == 1)
    {
        print 1 << nl << 1 << " " << 2 << nl;
        return;
    }

    while (l < r)
    {
        // print s[l] << " "<<s[r] <<nl;
        // print l << " " << r << nl;
        v.push_back({l + 1, r + 1});
        swap(s[l], s[r]);
        r -= 3;
        l += 3;
    }

    print v.size() << nl;
    for (auto i : v)
    {
        print i.first << " " << i.second << nl;
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
