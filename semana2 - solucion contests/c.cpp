#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<string> vec;
set<string> se;
int main() {
    ll n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        vec.push_back(s);
    }
    for (ll i = vec.size() - 1; i >= 0; i--) {
        if (se.find(vec[i]) == se.end()) {
            cout << vec[i] << endl;
            se.insert(vec[i]);
        }
    }
    return 0;
}