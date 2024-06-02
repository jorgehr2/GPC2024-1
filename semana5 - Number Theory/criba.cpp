#include <bits/stdc++.h>
#define pb push_back
#define inic ios_base::sync_with_stdio(false);
#define inic2 cin.tie(NULL);
#define inic3 cout.tie(NULL);
#define all(s) s.begin(), s.end()
using namespace std;
typedef int ll;
typedef long double ld;
#define Rep0(i, n) for (ll i = 0; i < (ll)n; i++)
#define Rep1(i, n) for (ll i = 1; i <= (ll)n; i++)
#define Repi0(i, n) for (ll i = n - 1; i >= 0; i--)
#define Repi1(i, n) for (ll i = n; i >= 1; i--)
#define POT(x) ((x) * (x))
const ll MX = 1e5 + 5, MX2 = 3e5 + 2;
const ll MOD = 998244353;
// const ll INF = 1e18;
// const long double INF_DOUBLE = 1e18 / 1.0;
const long double EPS = 1e-8;
const long double PI = acos(-1.0);

vector<ll> primos;
ll primerFactor[MX];
bool no_primo[MX];
void criba(ll n) { // n*log(log(n)) n=10^7
    no_primo[0] = no_primo[1] = true;
    for (ll i = 1; i <= n; i++) {
        primerFactor[i] = i;
    }
    for (long long i = 2; i <= n; i++) {
        if (no_primo[i] == false) {
            for (long long j = 2 * i; j <= n; j += i) {
                no_primo[j] = true;
                if (primerFactor[j] == j) {
                    primerFactor[j] = i;
                }
            }
        }
    }

    ll t = 0;
    for (long long i = 2; i <= n; i++) {
        if (no_primo[i] == false) {
            primos.pb(i);
        }
    }
}

vector<ll> obtener_divisores(ll x) {
    vector<ll> ans = {1};
    while (x > 1) {
        ll f = primerFactor[x];
        ll num = 1;
        ll sz = ans.size();
        while (x % f == 0) {
            num *= f;
            x /= f;
            for (ll i = 0; i < sz; i++) {
                ans.push_back(num * ans[i]);
            }
        }
    }
    // sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    inic;
    inic2;
    cout << "El mcd de 20 y 30 es: " << __gcd(20, 30) << endl;
    ll n;
    cin >> n;
    criba(n);
    cout << "El primer factor primo de n es: " << primerFactor[n] << endl;
    vector<pair<ll, ll>> descomposicion;
    ll s;
    cin >> s;
    while (s > 1) {
        ll num = s;
        ll cont = 0;
        while (s % primerFactor[num] == 0) {
            s /= primerFactor[num];
            cont++;
        }
        descomposicion.pb({num, s});
    }
    for (ll i = 0; i < descomposicion.size(); i++) {
        cout << descomposicion[i].first << " " << descomposicion[i].second << endl;
    }
    vector<ll> divisores = obtener_divisores(n);

    return 0;
}