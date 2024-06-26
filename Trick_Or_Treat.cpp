#include <bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;

        vector<ll> candy(n), choc(n);
        unordered_map<ll, ll> counta, countb;

        for (ll i = 0; i < n; i++) {
            cin >> candy[i];
            candy[i] %= m;
            counta[candy[i]]++;
        }

        for (ll i = 0; i < n; i++) {
            cin >> choc[i];
            choc[i] %= m;
            countb[choc[i]]++;
        }

        ll ans = 0;
        for (ll j = 0; j < m; j++) {
            if (j == 0) {
                ans += counta[0] * countb[0];
            } else {
                ans += counta[j] * countb[m - j];
            }
        }

        cout << ans << el;
    }

    return 0;
}
