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
    int A, B, C;

    int anser = 0;

    cin >> A >> B >> C;

    if (A % C == 0)
    {
        anser = C;
    }
    else
    {
        anser = A + (C - A % C);
    }

    if (anser <= B)
    {
        cout << anser;
    }
    else
    {
        cout << "-1";
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