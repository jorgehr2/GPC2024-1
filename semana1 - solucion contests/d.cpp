#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, x;
    cin >> n >> x;
    ll tot = 0;
    for (ll i = 1; i <= n; i++) {
        ll num;
        cin >> num;
        if (num <= x) {
            tot += num;
        }
    }
    cout << tot << endl;
    return 0;
}