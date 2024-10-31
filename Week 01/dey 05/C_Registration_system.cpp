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
    unordered_map<string, int> data;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (data.count(s) == 0)
        {
            print "OK" << nl;
            data[s] = 1;
        }
        else
        {
            int in = data[s];
            string newdata = s + to_string(in);

            while (data.count(newdata) > 0)
            {
                in++;
                newdata = s + to_string(in);
            }
            print newdata << nl;
            data[s] = in + 1;
            data[newdata] = 1;

            //    print data.count(s)<<nl;
        }
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
