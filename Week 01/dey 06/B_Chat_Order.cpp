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
    deque<string> sms;
    set<string> st;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (st.count(s))
        {
            sms.erase(remove(sms.begin(), sms.end(), s), sms.end());
        }
        else
        {
            st.insert(s);
        }
        sms.push_front(s);
    }

    for (const auto n : sms)
    {
        print n << nl;
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
