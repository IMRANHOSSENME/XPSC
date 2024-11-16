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
    int n , sum =0;
    cin >> n;
    vi v(n); 
    set<int> st;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = n-1; i >= 0; i--)
    {
        if (st.find(v[i]) != st.end())
        {
            break;
        }
        st.insert(v[i]);
        sum ++;
        
    }
    print n-sum << nl;
    
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
