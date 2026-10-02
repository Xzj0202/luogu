#include <climits>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    int M, N, X0, Y0;
    cin >> M >> N >> X0 >> Y0;

    vector<string> mat(M);
    for (int i = 0; i < M; i++) {
        cin >> mat[i];
    }

    --X0;
    --Y0;

    // dp[x][y][p] = 到达这个状态最少拒绝几条指令
    // 初始化为一个很大的数，表示"还没到达过"
    vector dp(M, vector(M, vector<int>(4, INT_MAX)));

    dp[X0][Y0][0] = 0;

    for (int i = 0; i < N; ++i) {
        string op;
        cin >> op;

        // 新的 dp
        vector ndp(M, vector(M, vector<int>(4, INT_MAX)));

        // 遍历所有当前可能的状态
        for (int x = 0; x < M; ++x) {
            for (int y = 0; y < M; ++y) {
                for (int p = 0; p < 4; ++p) {
                    if (dp[x][y][p] == INT_MAX) {
                        continue; // 这个状态到不了
                    }

                    // 到达这里已经拒绝了多少条
                    int cur = dp[x][y][p];

                    // 选择 1：拒绝这条指令
                    // 状态不变，拒绝数 +1
                    if (cur + 1 < ndp[x][y][p]) {
                        ndp[x][y][p] = cur + 1;
                    }

                    // 选择 2：执行这条指令
                    int nx = x, ny = y, np = p;
                    bool ok = true;

                    if (op == "FORWARD") {
                        nx = x + dx[p];
                        ny = y + dy[p];

                        if (nx < 0 || nx >= M || ny < 0 || ny >= M || mat[nx][ny] == '*') {
                            ok = false;
                        }
                    } else if (op == "BACK") {
                        nx = x - dx[p];
                        ny = y - dy[p];
                        if (nx < 0 || nx >= M || ny < 0 || ny >= M || mat[nx][ny] == '*') {
                            ok = false;
                        }
                    } else if (op == "LEFT") {
                        np = (p + 3) % 4;
                    } else if (op == "RIGHT") {
                        np = (p + 1) % 4;
                    }

                    if (ok) {
                        if (cur < ndp[nx][ny][np]) {
                            ndp[nx][ny][np] = cur;
                        }
                    }
                }
            }
        }

        dp = ndp;
    }

    int ans = INT_MAX;
    for (int x = 0; x < M; ++x) {
        for (int y = 0; y < M; ++y) {
            for (int p = 0; p < 4; ++p) {
                if (dp[x][y][p] < ans) {
                    ans = dp[x][y][p];
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}