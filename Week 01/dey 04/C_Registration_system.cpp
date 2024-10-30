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
    map<string, int> mp;
    string username;

    for (int i = 0; i < n; i++)
    {
        cin >> username;

        if (mp.find(username) == mp.end())
        {
            print 'OK'<<nl;
            mp[username] == 0;
        }
        
    }
    
    
    

    print nl;
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
