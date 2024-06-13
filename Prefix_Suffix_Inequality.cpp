#include <iostream>
#include <vector>
using namespace std;

vector<int> generateArray(int N) {
    vector<int> arr;
    // We start with 1 and continue with numbers that are 1 more than a power of 2
    for (int i = 0; i < N; ++i) {
        arr.push_back((1 << i) + 1);
    }
    return arr;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> result = generateArray(N);
        for (int i = 0; i < N; ++i) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

