#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector S(n + 1, vector<int>(n + 1));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x;
            S[i + 1][j + 1] = S[i][j + 1] + S[i + 1][j] - S[i][j] + (x != 0 ? 1 : 0);
        }
    }

    auto query = [&](int r1, int c1, int r2, int c2) -> int {
        return S[r2][c2] - S[r1][c2] - S[r2][c1] + S[r1][c1];
    };

    long long bestSize = LLONG_MAX;
    int bestK = 1;

    for (int k = 1; k <= n; ++k) {
        int blocks = (n + k - 1) / k;
        long long nonZeroBlocks = 0;

        for (int bi = 0; bi < blocks; ++bi) {
            for (int bj = 0; bj < blocks; ++bj) {
                int r1 = bi * k;
                int c1 = bj * k;
                int r2 = min(r1 + k, n);
                int c2 = min(c1 + k, n);

                if (query(r1, c1, r2, c2) > 0) {
                    ++nonZeroBlocks;
                }
            }
        }

        long long size = nonZeroBlocks * (1LL * k * k + 1);
        if (size < bestSize) {
            bestSize = size;
            bestK = k;
        }
    }

    cout << bestK << " " << bestSize << "\n";
    return 0;
}