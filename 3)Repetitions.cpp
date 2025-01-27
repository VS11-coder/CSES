#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fastio;
    ll res = 0;
    string s;
    cin >> s;
    ll n = s.size();
    ll cnt = 1;
    for (ll i = 1; i < n; i++) {
        if( s[i] == s[i-1] ) {
            cnt++;
        } else {
            res = max(res, cnt);
            cnt = 1;
        }
    }
    res = max(res, cnt);
    cout << res << endl;
    return 0;
}
