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
    int k;
    cin >> k;

    int n = s.size();
    map<char, int> mp;
    int l = 0, r = 0, ans = 0;

    while (r < n)
    {
        mp[s[r]]++;
        while (mp.size() > k)
        {
            mp[s[l]]--;
            if (mp[s[l]] == 0)
            {
                mp.erase(s[l]);
            }

            l++;
        }
        if (mp.size() == k)
        {
            ans = max(ans, r - l + 1);
        }
        r++;
    }
    if (ans == 0)
    {
        print -1 << nl;
    }else
    {
        print ans << nl;
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
