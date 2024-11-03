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
    int n, m;
    cin >> n>> m;
    vi v(n + 1);
    vector<int> r(n + 1);
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    for (int i = n; i >= 1; i--)
    {
        st.insert(v[i]);
        // print  v[i]<<nl;
        r[i] = st.size();
        // print st.size()<<nl;
    }

    for (int i = 1; i <= m; i++)
    {
        int q;
        cin >> q;

        print r[q]<<nl;
    }
    // print nl;
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
