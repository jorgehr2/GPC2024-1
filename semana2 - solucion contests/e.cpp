#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

stack<ll> st;
int main() {
    ll n;
    cin >> n;
    cin.ignore();
    while (n--) {
        bool cumple = true;
        string s;
        getline(cin, s);
        // cin >> s;
        for (ll i = 0; i < s.size(); i++) {
            if (s[i] == '{') {
                st.push(1);
            }
            if (s[i] == '[') {
                st.push(2);
            }
            if (s[i] == '(') {
                st.push(3);
            }
            if (s[i] == '}') {
                if (st.size() > 0 && st.top() == 1) {
                    st.pop();
                } else {
                    cumple = false;
                }
            }
            if (s[i] == ']') {
                if (st.size() > 0 && st.top() == 2) {
                    st.pop();
                } else {
                    cumple = false;
                }
            }
            if (s[i] == ')') {
                if (st.size() > 0 && st.top() == 3) {
                    st.pop();
                } else {
                    cumple = false;
                }
            }
        }
        if (st.size() == 0 && cumple == true) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
            while (!st.empty()) {
                st.pop();
            }
        }
    }
    return 0;
}