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
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sereja = 0;
    int dima = 0;

    int left = 0, right = n - 1;

    for (int i = 0; left <= right; i++)
    {
        if (i % 2 == 0)
        {
            if (v[left] > v[right])
            {
                sereja += v[left];
                left++;
            }
            else
            {
                sereja += v[right];
                right--;
            }
        }
        else
        {
            if (v[left] > v[right])
            {
                dima += v[left];
                left++;
            }
            else
            {
                dima += v[right];
                right--;
            }
        }
    }

    cout << sereja << " " << dima;
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