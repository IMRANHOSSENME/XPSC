#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define vpll vector<pair<ll, ll>>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl "\n" 
#define dq deque<int>
#define print cout << 

void solution() {
    int n,t;
    cin >> n>>t;

    int count = 0;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n - i; j++)
        {
            for (int k = 0; k <= n - i -j; k++)
            {
                if (i * j * k <= t)
                {
                    count ++;
                }
                
            }
            
        }
        
        
    }
    print count <<nl;
}

int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
