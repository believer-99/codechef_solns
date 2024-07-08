#include <bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        unordered_map<ll, ll> count;

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
            count[a[i]]++;
        }

        ll min_cost = LLONG_MAX;
        for (const auto &it : count) {
            ll x = it.first;
            ll freq = it.second;
            ll cost = (n - freq) * x;
            min_cost = min(min_cost, cost);
        }

        cout << min(min_cost,n) << el;
    }

    return 0;
}
