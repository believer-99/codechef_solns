#include <iostream>
#include <string>
using namespace std;

#define el '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        int n, k;
        cin >> n >> k;
        cin.ignore();

        string s, t;
        cin >> s >> t;

        ll count0s = 0, count0t = 0, countSame0 = 0, countSame1 = 0, countSame = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') count0s++;
            if (t[i] == '0') count0t++;
            if (s[i] == t[i]) {
                if (s[i] == '0') countSame0++;
                else countSame1++;
            }
        }

        if (count0s != count0t) {
            cout << "NO" << el;
            continue;
        }

        countSame = countSame1 + countSame0;
        ll countDiff = n - countSame;
        ll ops1 = countDiff / 2;
        ll ops2 = (countSame0 * (countSame0 - 1)) / 2 + (countSame1 * (countSame1 - 1)) / 2;

        if (ops1 > k) {
            cout << "NO" << el;
        } else if ((ops1 + ops2) >= k) {
            cout << "YES" << el;
        } else {
            cout << "NO" << el;
        }
    }

    return 0;
}
