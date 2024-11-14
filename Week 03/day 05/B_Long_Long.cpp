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
    vll v(n);
    vll v1;
 
    ll sum = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] != 0)
        {
            v1.push_back(v[i]);
        }
 
        sum += abs(v[i]);
    }
 
    ll l = -1;
    ll r = -1;
 
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] < 0)
        {
            if (l == -1)
            {
                l = i;
            }
            r = i;
        }
    }
 
    // print l << " " <<r << " ";
 
    ll result = 1;
 
    if (l != -1 && r != -1)
    {
        for (int i = l; i <= r; i++)
    {
        if (0 < v1[i])
        {
            result++;
        }
    }
    }
    
 
    print sum << " " << result << nl;
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
