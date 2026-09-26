#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, c1, c2;
    cin >> n >> m >> c1 >> c2;

    vector<int> S(n), T(m);
    for (int i = 0; i < n + m; ++i) {
        if (i < n) {
            cin >> S[i];
        } else {
            cin >> T[i - n];
        }
    }

    const int MAXV = 1'000'000 + 5;
    vector<vector<int>> pos(MAXV);
    for (int i = 0; i < n; ++i) {
        pos[S[i]].push_back(i);
    }

    int cur = 0;
    int round = 0;
    int lcs = 0;

    for (int i = 0; i < m; ++i) {
        int v = T[i];
        if (pos[v].empty()) {
            continue;
        }

        auto it = lower_bound(pos[v].begin(), pos[v].end(), cur);
        if (it != pos[v].end()) {
            cur = *it + 1;
        } else {
            ++round;
            cur = pos[v][0] + 1;
        }
        ++lcs;
    }

    int k;
    if (cur == 0) {
        k = round;
    } else {
        k = round + 1;
    }

    cout << c1 * lcs << ' ' << c2 * k << '\n';
    return 0;
}