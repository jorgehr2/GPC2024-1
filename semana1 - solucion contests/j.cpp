#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t, n, m, s;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        string h;
        cin >> h;
        vector<ll> as(n, 1), as2(n, 0);
        for (ll i = 0; i < m; i++) {
            ll x;
            cin >> x;
            as2[x - 1]++;
        }
        ll tot = 0;
        for (ll i = n - 1; i >= 0; i--) tot += as2[i], as[i] += tot;
        vector<ll> resp(26);
        for (ll i = 0; i < n; i++) resp[h[i] - 'a'] += as[i];
        for (ll x = 0; x < resp.size(); x++) {
            cout << resp[x] << " ";
        }
        cout << endl;
    }
    return 0;
}