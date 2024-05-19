#include <bits/stdc++.h>
using namespace std;

int a = 20;
char b = 'j';
string c = "hola mundo";
const double PI = 3.14;

vector<int> vec;
int arr[100000 + 2];

int main() {
    cin >> a;
    if (a == 20) {
        cout << "Igual a 20" << endl;
    } else {
        cout << "Diferente  a 20 " << endl;
    }

    switch (a) {
        case 20:
            cout << "Valor de x: " << 20 << endl;
            // code block
            break;
        case 30:
            cout << "Valor de x: " << 30 << endl;
            break;
        default:
            cout << "Cualquier otro valor" << endl;
    }

    for (int i = 0; i < vec.size(); i++) {
        vec.push_back(i);
    }
    sort(vec.begin(), vec.end());    // ORDENAMIENTO n*logn
    reverse(vec.begin(), vec.end()); // REVERTIR EL ORDEN DEL VECTOR

    double r;
    cin >> r;
    cout << "Area del circulo (de radio " << r << "): " << PI * r * r;
    int n;
    cin >> n;
    int f = 20;
    for (int i = 0; i < n; i++) { // "i<n" n veces; "i++" n veces; "f=f+1"
        f = f + 1;
    }
    // operaciones = 5*n^2 + 3*n+1 = big o(n^2)
    // operaciones =n*log + 5*n + 10 = big o( n*log(n))
    return 0;
}