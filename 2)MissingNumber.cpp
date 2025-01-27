#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    ll ans = 0;
    for( ll i = 1; i < n; i++ ) {
        ll x;
        cin >> x;
        ans ^= x;
        ans ^= i;
    }
    ans ^= n;
    cout << ans;
    return 0;
}
