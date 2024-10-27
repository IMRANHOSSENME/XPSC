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

    int total = 0;

    for (int i = 0; i < 2; i++)
    {
        if (A > B)
        {
            total += A;
            A--;
        }
        else
        {
            total += B;
            B--;
        }
    }
    cout << total;
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