#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (long long i = 0; i < (n); i++)
using ll = long long;


int main() {
    ll n, w;
    cin >> n >> w;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    
    // bit は 2^n 通りの部分集合全体を動く
    bool exist = false;
    for (ll bit = 0; bit < (1 << n); bit++) {
        ll sum = 0;
        rep(i, n) {
            // i番目の要素a[i]が部分集合に含まれているかどうか
            if (bit & (1 << i)) {
            sum += a[i];
            }
        }
        // sum が w と一致するかどうか
        if (sum == w) exist = true;
    }
    if (exist) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}