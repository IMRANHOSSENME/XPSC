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

    int fastpos = -1;
    int lastpos = -1;

    fastpos = s.find("B");
    lastpos = s.rfind("B");

    int result = lastpos - fastpos + 1;
    print result << " " << nl;
}

int main()
{
    fast_io;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
