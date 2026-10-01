#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    const int MOD = 5000011;
    vector<int> dp(N + 1);
    dp[0] = 1;

    for (int i = 1; i <= N; ++i) {
        dp[i] = dp[i - 1];
        if (i > K) {
            dp[i] = (dp[i] + dp[i - K - 1]) % MOD;
        } else {
            dp[i] = (dp[i] + 1) % MOD;
        }
    }

    cout << dp[N] << '\n';
    return 0;
}