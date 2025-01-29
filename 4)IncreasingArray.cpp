#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
    ll n; 
    cin >> n;
    ll res = 0;
    ll prev = 0;
    for (ll i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        if( i > 1 && x < prev) res += prev - x;
        prev = max(prev,x);
    }
    cout << res << endl;
}

int main() {
    fastio;
    solve();
    return 0;
}
