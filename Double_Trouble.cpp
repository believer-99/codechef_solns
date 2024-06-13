#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define ll long long

bool check_from_left(const vector<ll>& x, const vector<ll>& p, int n) {
    for (int i = 0; i < n - 1; ++i) {
        if (x[i] + p[i] < x[i + 1]) {
            return false;
        }
    }
    return true;
}

bool check_from_right(const vector<ll>& x, const vector<ll>& p, int n) {
    for (int i = n - 1; i > 0; --i) {
        if (x[i] - p[i] > x[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<ll> x(n), p(n);

        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        bool left_valid = check_from_left(x, p, n);
        bool right_valid = check_from_right(x, p, n);

        if (left_valid || right_valid) {
            cout << "YES" << el;
        } else {
            cout << "NO" << el;
        }
    }

    return 0;
}
