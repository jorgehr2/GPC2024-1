#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

map<string, ll> ma;
int main() {
    ll n;
    cin >> n;
    while (n--) {
        ll a, c;
        string b;
        cin >> a >> b;
        if (a == 1) {
            cin >> c;
            ma[b] += c;
        }
        if (a == 2) {
            ma[b] = 0;
        }
        if (a == 3) {
            cout << ma[b] << endl;
        }
    }
    return 0;
}