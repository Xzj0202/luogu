#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H, W;
    cin >> H >> W;

    vector<string> mat(H);
    for (int i = 0; i < H; ++i) {
        cin >> mat[i];
    }

    vector rowO(H, vector<int>(W + 1));
    for (int i = 0; i < H; ++i) {
        for (int j = W - 1; j >= 0; --j) {
            rowO[i][j] = rowO[i][j + 1] + (mat[i][j] == 'O' ? 1 : 0);
        }
    }

    vector colI(H + 1, vector<int>(W));
    for (int j = 0; j < W; ++j) {
        for (int i = H - 1; i >= 0; --i) {
            colI[i][j] = colI[i + 1][j] + (mat[i][j] == 'I' ? 1 : 0);
        }
    }

    long long ans = 0;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (mat[i][j] == 'J') {
                ans += 1LL * rowO[i][j] * colI[i][j];
            }
        }
    }

    cout << ans << '\n';
    return 0;
}