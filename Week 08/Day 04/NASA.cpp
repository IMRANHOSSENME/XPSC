#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define nl "\n"
const int maxn = (1 << 15);
vi all;

bool inPalindrome(int x) {
    string s = to_string(x);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

void palindrome() {
    for (int i = 0; i < maxn; i++) {
        if (inPalindrome(i)) {
            all.push_back(i);
        }
    }
}

void solution() {
    int n;
    cin >> n;
    vi v(n), cun(maxn + 1, 0);
    ll ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        cun[v[i]]++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < all.size(); j++) {
            int c = v[i] ^ all[j];
            if (c < maxn) {
                ans += cun[c];
            }
        }
        cun[v[i]]--; 
    }
    cout << ans << nl;
}

int main() {
    fast_io;
    palindrome();
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
