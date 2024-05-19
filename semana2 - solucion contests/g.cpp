#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

set<ll> se;
int main() {
    ll n;
    cin >> n;
    while (n--) {
        ll l;
        cin >> l;
        se.insert(l);
    }
    if (se.size() == 1) {
        cout << "NO" << endl;
    } else {
        set<ll>::iterator it = se.begin();
        it++;
        cout << *it << endl;
    }
    return 0;
}