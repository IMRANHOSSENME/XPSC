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
    multiset<int> ml; 
    for (int i = 1; i <= n; i++) {
        int data;
        cin >> data;
        ml.insert(data);
    }

    int result = 0; 
    int p = 1;

    while (!ml.empty())
    {
        auto it = ml.lower_bound(p);
        if (it != ml.end())
        {
            result ++;
            ml.erase(it);
        }else
        {
            break;
        }
        
        p++;
        
    }
    
    
    
    print result<< nl;
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
