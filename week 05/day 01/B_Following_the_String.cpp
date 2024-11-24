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
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            for (int j = 0; j < 26; j++)
            {
                char data = 'a' + j;
                if (!mp[data])
                {
                    print data;
                    mp[data]++;
                    break;
                }
            }
        }
        else
        {
            for (int j = 0; j <= 26; j++)
            {
                char data = 'a' + j;
                if (mp[data] == v[i])
                {
                    // print mp[data] <<" ";
                    print data;
                    mp[data]++;
                    break;
                }
            }
        }
    }

    print nl;
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
