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
    int n, ind = 1;
    cin >> n;
    set<pair<int, int>> st; 
    multiset<pair<int, int>> ml;
    vi result;

    for (int i = 1; i <= n; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            int many;
            cin >> many;
            st.insert({ind, many});
            ml.insert({many, -ind});
            ind++;
        } else if (type == 2) {
            auto it = st.begin();
            int pos = it->first;
            int many = it->second;
            result.push_back(pos);
            st.erase(it);
            ml.erase({many, -pos});
        } else {
            auto it = ml.rbegin();
            int many = it->first;
            int pos = -it->second;
            result.push_back(pos);
            ml.erase(--ml.end());
            st.erase({pos, many});
        }
    }

    for (int i : result) {
        cout << i << " ";
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
