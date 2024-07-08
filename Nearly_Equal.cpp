#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cin.ignore();
        
        string a, b;
        getline(cin, a);
        getline(cin, b);

        int min_diff = INT_MAX;
        for (int i = 0; i <= n - m; ++i) {
            int diff_count = 0;
            for (int j = 0; j < m; ++j) {
                if (a[i + j] != b[j]) {
                    ++diff_count;
                }
            }
            min_diff = min(min_diff, diff_count);
        }
        
        cout << min_diff << el;
    }

    return 0;
}
