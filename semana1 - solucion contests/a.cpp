#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll numeros[200000 + 2];
int main() {
    ll n;
    cin >> n;
    for (ll i = 1; i < n; i++) {
        ll num;
        cin >> num;
        numeros[num]++;
    }
    for (ll i = 1; i <= n; i++) {
        if (numeros[i] == 0) { // El numero no ha sido imprimido como input
            cout << i << endl;
            break;
        }
    }
    return 0;
}