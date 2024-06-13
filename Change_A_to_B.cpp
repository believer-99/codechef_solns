#include <bits/stdc++.h>
using namespace std;

int solver(int a, int b, int k) {
    int operations = 0; 
    while (true) {
        if (b / k >= a && b % k == 0) { 
            operations++; 
            b /= k; 
        } 
        else if (b % k == 0) { 
            operations += (b - a); 
            break; 
        }   
        else { 
            operations += (b % k); 
            b -= b % k; 
        } 
    } 
    return operations;
}

int main() { 
    int t; 
    cin >> t; 
    while (t--) { 
        int a, b, k; 
        cin >> a >> b >> k; 
        cout << solver(a, b, k) << endl; 
    }  
    return 0; 
}
