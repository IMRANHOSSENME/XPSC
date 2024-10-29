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
    int a, b, t;
    cin >> a >> b >> t;
    
    float timel = t + 0.5;
    int limit = 0;
    int bis = 0;  

    while (limit + a <= timel) {
        limit += a;
        bis += b;    
    }
    cout << bis << nl;
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

