#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll getBit(ll x, ll i) {
    return (x >> i) & 1;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        if (l == r) {
            cout << l << endl;
            continue;
        }
        bool ult = false, ult2 = false;
        ll cant = 0, cant2 = 0;
        ll num = 0;
        for (ll i = 60; i >= 0; i--) {
            if (getBit(r, i) == getBit(l, i) && ult2 == false) {
                num = num * 2 + getBit(l, i);
            }
            if (ult2 == true) {
                num = num * 2 + 1;
            }
            if (getBit(r, i) == 1 && getBit(l, i) == 0 && ult2 == false) {
                ult2 = true;
                num = num * 2;
                cant = i + 1;
            }
            if (getBit(r, i) == 1 && ult2 == true) {
                cant2++;
            }
        }
        if (cant2 == cant) {
            cout << r << endl;
        } else {
            cout << num << endl;
        }
    }
    return 0;
}
