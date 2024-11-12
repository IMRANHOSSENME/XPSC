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
    string s;
    cin >> s;
    int l = 0, r = n - 1, ans = n;

    while (l <= r)
    {
        if (s[l] == s[r])
        {
            break;
        }
        else
        {
            ans -= 2;
            l++;
            r--;
        }
    }
    print ans << nl;
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
