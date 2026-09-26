#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> colors(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> colors[i];
    }

    vector<vector<int>> g(n + 1);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int ans = 1;
    vector<int> down(n + 1, 0);

    auto dfs = [&](auto&& self, int u, int p) -> void {
        down[u] = 1;
        int best1 = 0, best2 = 0;

        for (int v : g[u]) {
            if (v == p) {
                continue;
            }
            self(self, v, u);

            if (colors[u] != colors[v]) {
                int val = down[v];
                if (val > best1) {
                    best2 = best1;
                    best1 = val;
                } else if (val > best2) {
                    best2 = val;
                }
            }
        }

        down[u] = 1 + best1;
        ans = max(ans, 1 + best1 + best2);
    };

    dfs(dfs, 1, 0);

    cout << ans << '\n';
    return 0;
}