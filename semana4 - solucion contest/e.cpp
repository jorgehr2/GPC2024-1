#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i; i < t; i++) {
        int n;
        cin >> n;
        vector<int> Lo;

        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            Lo.push_back(a);
        }
        sort(Lo.begin(), Lo.end());
        for (int j = 1; j <= 1024; j++) {
            bool val = false;
            vector<int> Lm;
            for (int k = 0; k < n; k++) {
                int a = j ^ Lo[k];
                Lm.push_back(a);
            }
            sort(Lm.begin(), Lm.end());
            for (int k = 0; k < n; k++) {
                if (Lo[k] == Lm[k]) {
                    val = true;
                    continue;
                } else {
                    val = false;
                    break;
                }
            }
            if (val == false) {
                if (j == 1024) {
                    cout << -1 << endl;
                }
                continue;
            } else {
                cout << j << endl;
                break;
            }
        }
    }
}
