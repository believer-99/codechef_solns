#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
            // If there is only one element, no adjacent differences to consider
            cout << 0 << el;
            continue;
        }

        // Calculate initial sum of differences
        int initialSum = 0;
        for (int i = 1; i < n; i++) {
            initialSum += abs(a[i] - a[i - 1]);
        }

        int maxSum = initialSum;

        // Check changing each element to 1 and K
        for (int i = 0; i < n; i++) {
            int original = a[i];

            // Changing a[i] to 1
            int newSum1 = initialSum;
            if (i > 0) {
                newSum1 -= abs(a[i] - a[i - 1]);
                newSum1 += abs(1 - a[i - 1]);
            }
            if (i < n - 1) {
                newSum1 -= abs(a[i] - a[i + 1]);
                newSum1 += abs(1 - a[i + 1]);
            }
            maxSum = max(maxSum, newSum1);

            // Changing a[i] to K
            int newSumK = initialSum;
            if (i > 0) {
                newSumK -= abs(a[i] - a[i - 1]);
                newSumK += abs(k - a[i - 1]);
            }
            if (i < n - 1) {
                newSumK -= abs(a[i] - a[i + 1]);
                newSumK += abs(k - a[i + 1]);
            }
            maxSum = max(maxSum, newSumK);
        }

        cout << maxSum << el;
    }

    return 0;
}


