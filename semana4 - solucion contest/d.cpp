#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll getBit(ll x, ll i) {
    return (x >> i) & 1;
}

int main() {
    ll n;
    cin >> n;
    ll rp = 0;
    for (ll i = 0; i <= 30; i++) {
        if (getBit(n, i) == 1) {
            rp++;
        }
    }
    cout << rp << endl;
    return 0;
}