#include <bits/stdc++.h>
using namespace std;

using Long = long long;

#define debug(x) cout << #x << " = " << x << endl

int main() {
    stack<char> s;
    string parentesis;
    cin >> parentesis;

    for (char c : parentesis) {
        if (c == '(' || s.empty()) {
            s.push(c);
        } else { // c == ')'
            if (s.top() == '(') {
                s.pop();
            } else {
                s.push(c);
            }
        }
    }

    cout << (s.empty() ? "Balanceada" : "Desbalanceada");

    return 0;
}
