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

void solution()
{
    string n;
    cin >> n;
    string s;

    if (n.size() == 1)
    {
        s = "000" + n;
    }
    else if (n.size() == 2)
    {
        s = "00" + n;
    }
    else if (n.size() == 3)
    {
        s = "0" + n;
    }
    else
    {
        s = n;
    }

    cout << s;
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