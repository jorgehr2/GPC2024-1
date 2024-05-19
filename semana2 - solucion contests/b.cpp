#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

set<ll> se;
int main() {
    ll n;
    cin >> n;
    while (n--) {
        ll a, b;
        cin >> a >> b;
        if (a == 1) {
            se.insert(b);
        }
        if (a == 2) {
            se.erase(b);
        }
        if (a == 3) {
            if (se.find(b) == se.end()) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}