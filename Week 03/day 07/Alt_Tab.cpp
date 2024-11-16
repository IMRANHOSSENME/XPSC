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
    int n;
    cin >> n;
    vector<string> v(n);
    set<string> st;
    vector<string> re;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        if (st.find(v[i]) == st.end()) {
            st.insert(v[i]);
            re.push_back(v[i]);
        }
    }

    for (const string& r : re) {
        cout << r.substr(r.size() - 2); 
    }
    cout << nl;
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
