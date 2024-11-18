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
    string s;
    cin >> s;

    vector<char> v;
    int i = n - 1;
    while (i >= 0) {
        if (s[i] == '0') {
            int num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
            v.push_back(char('a' + num - 1));
            i -= 3;
        } else {
            int num = s[i] - '0';
            v.push_back(char('a' + num - 1));
            i--;
        }
    }

    reverse(v.begin(), v.end());

    for (char c : v) {
        print c;
    }
    print nl;
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
