#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll a, b, k;
        cin >> a >> b >> k;
        ll veces = k / 2;
        ll posActual = veces * (a - b);
        if (k % 2 != 0) {
            posActual += a;
        }
        cout << posActual << endl;
    }
    return 0;
}