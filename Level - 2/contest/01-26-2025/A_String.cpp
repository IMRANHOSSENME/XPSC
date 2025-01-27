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

vector<int> solution(int t, vector<string> &ts)
{
    vector<int> ans;
    for (const string &s : ts)
    {
        int op = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                while (i < n && s[i] == '1')
                {
                    op++;
                    i++;
                }
            }
        }
        ans.push_back(op);
        cout << nl;
    }
    return ans;
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    vector<string> v;
    
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    
    vector<int> ans = solution(t, v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << nl;
    }
    return 0;
}
