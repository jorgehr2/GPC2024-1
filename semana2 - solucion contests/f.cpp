#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll> v;
vector<ll> low;
bool a[500005];
ll n, error, e, vis, c, i, j;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> e;
        v.push_back(e);
    }
    sort(v.begin(), v.end());

    j = n / 2;
    i = 0;
    while (i < n && j < n) {
        if (v[j] >= v[i] * 2 && a[i] == 0 && a[j] == 0) {
            a[i] = 1;
            a[j] = 1;
            j++;
            i++;
        } else j++;
    }

    for (i = 0; i < n; i++) {
        // cout << a[i] << " ";
        if (a[i] == 0) vis++;
        if (a[i] == 1) c++;
    }
    cout << vis + c / 2 << endl;
    return 0;
}