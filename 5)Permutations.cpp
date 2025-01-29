#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    fast;
    ll n;
    cin >> n; 
    if( n == 1 ) {
        cout << 1;
        return 0;
    }
    if( n < 4 ) {
        cout << "NO SOLUTION";
        return 0;
    }
    for( ll i = 2; i <= n; i += 2 ) {
        cout << i << " ";
    }
    for( ll i = 1; i <= n; i += 2 ) {
        cout << i << " ";
    }
    return 0;
}
