#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<string> ans;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void change(int i, int j) {
    ans[i][j] = '*';
    for (int k = 0; k < 8; ++k) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if (ni >= 0 && ni < n && nj >= 0 && nj < m && ans[ni][nj] != '*') {
            ++ans[ni][nj];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    ans.assign(n, string(m, '0'));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char ch;
            cin >> ch;
            if (ch == '*') {
                change(i, j);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << '\n';
    }

    return 0;
}