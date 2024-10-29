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

    if (n >= 100)
    {
        print 0 << nl;
    }else
    {
        int pb = 100-n;
        pb = (pb / 10) * 10;
        print pb << nl;

    }
    
    

}

int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
