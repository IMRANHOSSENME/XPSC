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
    cin >> n >> m;
    vi v;

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        if (m == data)
        {
            continue;
        }
        else
        {
            v.push_back(data);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            continue;
        }
        else
        {
            print v[i] << " ";
        }
    }

    print nl;
}

int main()
{
    fast_io;
    int t = 1;
    // cin >> t; // Uncomment if multiple test cases are needed
    while (t--)
    {
        solution();
    }
    return 0;
}
