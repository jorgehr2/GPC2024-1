#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;
    while (true) {
        if (n == 1) {
            cout << n;
            break;
        }
        cout << n << " ";
        n = (!bool(n % 2)) * n / 2 + bool(n % 2) * (n * 3 + 1);
    }
    return 0;
}