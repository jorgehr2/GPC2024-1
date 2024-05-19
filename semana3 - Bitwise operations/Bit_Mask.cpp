#include <bits/stdc++.h>
using namespace std;

using Long = long long;

#define debug(x) cout << #x << " = " << x << endl
#define FIN                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

Long getBit(Long x, Long i) {
    return (x >> i) & 1;
}

void turnOn(Long &x, Long i) {
    x = x | (1LL << i);
}

void turnOff(Long &x, Long i) {
    x = x & (~(1LL << i));
}

void changeBit(Long &x, Long i) {
    x = x ^ (1LL << i);
}

int main() {
    FIN;
    Long n = 3;
    vector<char> v = {'a', 'b', 'c'};

    for (Long mask = 0; mask < (1LL << n); mask++) {
        cout << "{ ";
        for (Long i = 0; i < n; i++) {
            if (getBit(mask, i) == 1) {
                cout << v[i] << " ";
            }
        }
        cout << "}" << endl;
    }

    return 0;
}
