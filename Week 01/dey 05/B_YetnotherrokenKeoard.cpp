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
#define print cout <<

void solution()
{
    string s, result;
    cin >> s;
    reverse(s.begin(), s.end());

    int up = 0;
    int lo = 0;

    for (char ch : s)
    {
        if (ch == 'b')
        {
            lo++;
        }
        else if (ch == 'B')
        {
            up++;
        }
        else
        {
            if (islower(ch) && 0 < lo)
            {
                lo--;
            }
            else if (isupper(ch) && 0 < up)
            {
                up--;
            }
            else
            {
                result.push_back(ch);
            }
        }
    }

    reverse(result.begin(), result.end());

    if (result.empty())
    {
        print ' ' << nl;
    }
    else
    {
        print result << nl;
    }
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solution();
    }
    return 0;
}
