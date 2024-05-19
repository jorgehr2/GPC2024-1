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

    Long n = -18;

    turnOff(n, 30);

    vector<Long> bin;

    for (int i = 0; i < 32; i++) {
        bin.push_back(getBit(n, i));
    }

    reverse(bin.begin(), bin.end());
    for (Long a : bin) {
        cout << a;
    }

    return 0;
}
