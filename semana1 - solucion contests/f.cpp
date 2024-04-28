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
    ll ant = -1, rp = 0;
    for (auto x : vec) {
        if (x != ant) {
            rp++;
        }
        ant = x;
    }
    cout << rp << endl;
    return 0;
}