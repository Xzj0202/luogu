#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<string> mat(n);
    for (int i = 0; i < n; ++i) {
        cin >> mat[i];
    }

    // BFS
    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int, int>> q;
    dist[0][0] = 0;
    q.push({0, 0});
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for (int d = 0; d < 4; ++d) {
            int nx = x + dx[d], ny = y + dy[d];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && mat[nx][ny] == '.' &&
                dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    // S总步数，base基本 步数，C绕路步数
    int S = dist[n - 1][m - 1];
    long long base = (long long)(n + m - 2);
    long long C = (S - base) / 2;

    long long best = -1;
    int cnt = 0;
    for (int i = 0; i < k; ++i) {
        long long a, b;
        cin >> a >> b;
        long long t = base * a + C * (a + b);
        if (best == -1 || t < best) {
            best = t;
            cnt = 1;
        } else if (t == best) {
            ++cnt;
        }
    }

    cout << best << " " << cnt << "\n";
    return 0;
}