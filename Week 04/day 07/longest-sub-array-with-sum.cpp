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
    int k;
    cin >> k;
    vector<int> v = {-1, 2, -3};

    int n = v.size();

    int l= 0, r = 0, ans = 0 ,sum = 0;
    map<int,int> mp;
    mp[0] = -1;

    while (r < n)
    {
        sum += v[r];
        if (mp.find(sum - k) != mp.end())
        {
            ans = max( ans, r - mp[sum - k]);
        }

        if(mp.find(sum) == mp.end()){
            mp[sum] = r;
        }
        r++;
    }
    print ans << nl;
    

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
