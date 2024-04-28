#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> vec;
int main() {
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        ll num;
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end());
    bool esta = false;
    for (ll i = 1; i < vec.size() - 1; i++) {
        if (vec[i] > vec[i + 1] - vec[i - 1] &&
            vec[i] <
                vec[i + 1] + vec[i - 1]) { // Si el segmento medio cumple la condicion b<a+c
            cout << "YES" << endl;
            esta = true;
            break;
        }
    }
    if (!esta) {
        cout << "NO" << endl;
    }
    return 0;
}