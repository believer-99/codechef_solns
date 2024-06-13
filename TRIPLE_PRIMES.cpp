#include <bits/stdc++.h>
using namespace std;

#define el endl
#define ll long long

bool isPrime(int number) {
    if (number <= 1) {
        return false;  // Numbers less than or equal to 1 are not prime
    }
    if (number <= 3) {
        return true;   // 2 and 3 are prime numbers
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return false;  // Multiples of 2 and 3 are not prime
    }
    
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // Precompute prime numbers and their squares
    vector<ll> primeSquares;
    for (int i = 2; i <= 100000; ++i) {
        if (isPrime(i)) {
            primeSquares.push_back(static_cast<ll>(i) * i);
        }
    }

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        
        bool found = false;
        int m = primeSquares.size();
        for (int i = 0; i < m && primeSquares[i] < n; ++i) {
            for (int j = i; j < m && primeSquares[i] + primeSquares[j] < n; ++j) {
                ll remaining = n - primeSquares[i] - primeSquares[j];
                if (binary_search(primeSquares.begin() + j, primeSquares.end(), remaining)) {
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }

        if (found) {
            cout << "YES" << el;
        } else {
            cout << "NO" << el;
        }
    }

    return 0;
}

