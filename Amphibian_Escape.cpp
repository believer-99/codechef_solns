#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // Fast I/O

    int t;
    cin >> t;
    while (t--) {
        ll n, k, h;
        cin >> n >> k >> h;
        ll count = 0;

        for (ll x = 1; x <= n; ++x) {
            ll minY = ((k * x - h) / (k - 1)); 
            if(x>=h)
            {
              count+=n;
            }
            else if (minY >= 1 && minY <= n) {
                count += minY;
            }
        }
        cout << count << el;
    }

    return 0;
}

