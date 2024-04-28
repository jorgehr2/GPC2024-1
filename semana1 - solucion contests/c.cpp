#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string s;
    cin >> s;
    char anterior = '#';
    ll cant_max = -1, actual = 0;
    for (ll i = 0; i < s.size(); i++) {
        if (s[i] != anterior) {
            actual = 1;
        } else {
            actual++;
        }
        anterior = s[i];
        cant_max = max(cant_max, actual); // Siempre se actualiza la máxima cantidad
    }
    cout << cant_max << endl;
    return 0;
}