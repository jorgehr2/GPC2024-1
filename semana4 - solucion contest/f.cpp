#include <bits/stdc++.h>
#define inic ios_base::sync_with_stdio(false);
#define inic2 cin.tie(NULL);
#define inic3 cout.tie(NULL);
using namespace std;
typedef long long ll;
const ll MX = 5e3 + 2;

ll cant[MX][MX];
int main() {
    inic;
    inic2;
    ll n, m;
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for (ll j = s.size() - 1; j >= 0; j--) {
            if (s[j] == '1') {
                cant[i][j + 1] = cant[i][j + 2] + 1;
            } else {
                cant[i][j + 1] = 0;
            }
        }
    }
    vector<ll> usar;
    ll resp = 0;
    for (ll j = 1; j <= m; j++) {
        for (ll i = 1; i <= n; i++) {
            usar.push_back(cant[i][j]);
        }
        sort(usar.begin(), usar.end());
        for (ll i = usar.size() - 1; i >= 0; i--) {
            resp = max(resp, usar[i] * (usar.size() - i));
        }
        usar.clear();
    }
    cout << resp << endl;

    return 0;
}