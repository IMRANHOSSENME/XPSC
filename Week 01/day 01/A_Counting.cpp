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
    int A, B;
    cin >> A >> B;
    int result = 0;

    if (100 >= A && 100 >= B)
    {
        if (A > B)
        {
            result = 0;
        }
        else
        {
            result = B - A + 1;
        }
    }

    cout << result;
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