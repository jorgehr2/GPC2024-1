#include <bits/stdc++.h>
using namespace std;

int main() {
    // Stack
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    // Recorrer stack
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    // cout : 7 6 5 4 3
    return 0;
}
