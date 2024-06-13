#include <bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maxCount = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += a[j];
                if (sum % 2 == 0) {
                    maxCount = max(maxCount, j - i + 1);
                }
            }
        }

        cout << maxCount << el;
    }

    return 0;
}
