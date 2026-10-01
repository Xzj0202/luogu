#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(k + 1);
    for (int i = 0; i <= k; ++i) {
        cin >> a[i];
    }

    vector<string> grid(m, string(n, '.'));

    for (int x = 0; x < n; ++x) {
        long long fx = 0;
        long long power = 1;
        for (int i = 0; i <= k; ++i) {
            fx += a[i] * power;
            power *= x;
        }
        if (fx >= 0 && fx < m) {
            int row = m - 1 - (int)fx;
            grid[row][x] = '*';
        }
    }

    for (int i = 0; i < m; ++i) {
        cout << grid[i] << '\n';
    }

    return 0;
}