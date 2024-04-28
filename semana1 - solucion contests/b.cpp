#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, s, k;
    cin >> n >> s >> k;
    ll tot = 0;
    for (ll i = 1; i <= n; i++) {
        ll p, q;
        cin >> p >> q;
        tot += p * q;
    }
    cout << tot + bool(tot < s) * k << endl; // Si el total es menor a s, se suma k al total
    return 0;
}