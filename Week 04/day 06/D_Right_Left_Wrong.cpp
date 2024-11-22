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
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> s;
    int l = -1;
    int r = -1;
    int sum = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L' && l == -1)
        {
            l = i;
        }
        else if (s[i] == 'R')
        {
            r = i;
        }
    }
     if (l == -1 || r == -1 || l > r) {
        print "0" << nl;
        return;
    }

    for (int i = l; i <= r; i++)
    {
        sum += v[i];
    }

     for (int i = l+1; i < r-1; i++) {
        if (s[i] == 'L' && s[i + 1] == 'R') {
            // print i+1 << " "<<i +2 << nl ;
            ans = max(ans, i+1 + (i + 2));  
        }
    }
    int re = ans + sum;

    print re << nl;
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
