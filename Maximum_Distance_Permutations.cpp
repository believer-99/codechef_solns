#include <bits/stdc++.h>
#define lil long long int
const int MOD = 1e9 + 7;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int test;
    cin >> test; // Read the number of test cases

    while (test--) {
        int n;
        cin >> n; // Read the size of the array
        vector<int> a(n), b(n);

        // Initialize array 'a' with values 1 to n
        for (int i = 0; i < n; i++) {
            a[i] = i + 1;
        }

        // Fill the second half of array 'b' with values starting from 1
        int i = n / 2;
        int j = 1;
        for (; i < n; i++) {
            b[i] = j++;
        }

        // Fill the first half of array 'b' with the remaining values
        for (i = 0; i < n / 2; i++) {
            b[i] = j++;
        }

        // Print array 'a'
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;

        // Print array 'b'
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
