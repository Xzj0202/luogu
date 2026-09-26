#include <iostream>
using namespace std;

const int MOD = 10000;
int dp[1005][1005];
int pre[1005]; // pre[j] = dp[i-1][0] + ... + dp[i-1][j]

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    dp[0][0] = 1;

    for (int i = 1; i <= n; ++i) {
        // 先算上一行的前缀和
        pre[0] = dp[i - 1][0];
        for (int j = 1; j <= k; ++j) {
            pre[j] = (pre[j - 1] + dp[i - 1][j]) % MOD;
        }

        // dp[i][j] = pre[j] - pre[j-i]
        for (int j = 0; j <= k; ++j) {
            dp[i][j] = pre[j];
            if (j - i >= 0) {
                dp[i][j] = (dp[i][j] - pre[j - i] + MOD) % MOD;
            }
        }
    }

    cout << dp[n][k] % MOD << endl;
    return 0;
}