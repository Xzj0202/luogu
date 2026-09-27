#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> a;
vector<vector<int>> g;
vector<int> dp;

int dfs(int u, int parent) {
    if (dp[u] != -1) {
        return dp[u];
    }
    int sum = 0;
    for (int v : g[u]) {
        if (v == parent) {
            continue;
        }
        if (a[u] > a[v]) {
            sum += dfs(v, u);
        }
    }
    dp[u] = sum + 1;
    return dp[u];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    a.assign(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    g.assign(n + 1, {});
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dp.assign(n + 1, -1);
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans = max(ans, dfs(i, 0));
    }
    cout << ans << '\n';
    return 0;
}