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
    string s;
    cin >> s;
    vector<bool> v(26, false);

    for (char ch : s)
    {
        v[ch - 'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!v[i])
        {
            print char(i + 'a') << nl;
            return;
        }
    }

    print "None" << nl;
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
