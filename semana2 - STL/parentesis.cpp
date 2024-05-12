#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<char> s;
    string parentesis;
    cin >> parentesis;

    // i
    // (()()()))
    // s = (

    // string texto = "hola como estas";
    // char character = 'c';

    for (char c : parentesis) {
        if (c == '(') {
            s.push('(');
        } else { // c == ')'
            if (!s.empty() && s.top() == '(') {
                s.pop();
            } else {
                s.push(')');
            }
        }
    }

    if (s.empty()) {
        cout << "Balanceada";
    } else {
        cout << "Desbalanceada";
    }

    return 0;
}
