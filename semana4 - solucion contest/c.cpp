#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll getBit(ll x, ll i) {
    return (x >> i) & 1;
}

int main() {
    ll n;
    cin >> n;
    ll cont = 0;
    while (getBit(n, cont) == 0) {
        cont++;
    }
    cout << cont << endl;
    return 0;
}