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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int i = 0, result = 0;

    while (i < n) {
        while (i < n && s[i] == 'W') {
            i++;
        }
        
        if (i < n) {
            result++;
            i += k; 
        }
    }
    
    print result << nl;
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
