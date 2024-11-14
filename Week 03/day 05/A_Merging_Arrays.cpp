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
    int n,m;
    cin >> n>>m;
    multiset<int> s;
    for (int i = 0; i < n; i++) {
        int data; cin >> data;
        s.insert(data);
    }
    for (int i = 0; i < m; i++) {
        int data; cin >> data;
        s.insert(data);
    }

    for ( int i : s)
    {
        print i<<" ";
    }
    
    
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
