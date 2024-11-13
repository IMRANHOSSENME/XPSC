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
    int n, k;
    cin >> n >> k;
    vector<char> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int wc = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'W')
        {
            wc++;
        }
    }

    int result = wc;

    for (int i = k; i < n; i++)
    {
        if (s[i] == 'W')
        {
            wc++;
        }
        if (s[i - k] == 'W')
        {
            wc--;
        }
        result = min(result, wc);
    }

    print result << nl;
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
