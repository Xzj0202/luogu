#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << "\n";
        return 0;
    }
    if (n == 2) {
        cout << -1 << "\n";
        return 0;
    }

    long long k1 = (long long)(n - 1) * n / 2;
    long long k2 = (long long)(n - 2) * (n - 1) * n * (n + 1) / 4;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            cout << j + (long long)(i - 1) * k1 << " ";
        }
        cout << (long long)i * k1 << "\n";
    }
    for (int j = 1; j < n; j++) {
        cout << j + k2 << " ";
    }
    cout << k1 + k2 << "\n";

    return 0;
}