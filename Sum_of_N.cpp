#include<bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    
    int n = 1e6;
    vector<int> largestPrimeFactor(n + 1, 0);

    // Compute the largest prime factor for every number up to 1e6
    for(int i = 2; i <= n; i++) {
        if(largestPrimeFactor[i] == 0) { // i is a prime number
            for(int j = i; j <= n; j += i) {
                largestPrimeFactor[j] = i;
            }
        }
    }

    while(t--) {
        int k;
        cin >> k;
        long long sum = 0;
        for(int i = 2; i <= n; i++) {
            if(largestPrimeFactor[i] == k) {
                sum += i;
            }
        }
        cout << sum << el;
    }
    
    return 0;
}
