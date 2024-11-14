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
    int n, k, q;
    cin >> n >> k >> q;
    vi a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0;
    ll count = 0;
    
    for (int r = 0; r < n; r++) {
        if (a[r] > q) {
            l = r + 1;
            continue;
        }
        
        if (r - l + 1 >= k) {
            count += r - l + 1 - (k - 1);
        }
    }
    
    print count <<nl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
