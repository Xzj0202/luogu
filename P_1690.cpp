#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int n, p;
vector<vector<int>> d;
vector<int> P;
int ans = INT_MAX;

// 当前在第 cur 个点，已经访问了 cnt 个宝藏，总距离 sum
void dfs(int cur, int cnt, int sum) {
    // 剪枝
    if (sum >= ans) {
        return;
    }

    // 出口
    if (cnt == p) {
        ans = min(ans, sum + d[cur][n - 1]);
        return;
    }

    // 枚举下一个还没拿的宝藏
    for (int i = 0; i < p; ++i) {
        if (P[i] == -1) {
            continue;
        }

        int nxt = P[i];
        P[i] = -1;

        // 递归
        dfs(nxt, cnt + 1, sum + d[cur][nxt]);

        // 回溯
        P[i] = nxt;
    }
}

int main() {
    cin >> n;
    d.assign(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> d[i][j];

    // Floyd 求任意两点最短路
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (d[i][k] + d[k][j] < d[i][j]) {
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }

    cin >> p;
    P.resize(p);
    for (int i = 0; i < p; ++i) {
        cin >> P[i];
        --P[i];
    }

    if (p == 0) {
        cout << d[0][n - 1] << endl;
        return 0;
    }

    dfs(0, 0, 0);
    cout << ans << endl;
    return 0;
}