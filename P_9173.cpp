#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int next_match(int last, int need) {
    if (need == 1) {
        return (last & 1) ? last + 2 : last + 1;
    } else {
        return (last & 1) ? last + 1 : last + 2;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    const int INF = 1e9;
    vector<int> prev(m + 1, INF), cur(m + 1, INF);
    prev[0] = 0;

    for (int i = 0; i <= n; ++i) {
        fill(cur.begin(), cur.end(), INF);

        for (int j = 0; j <= m; ++j) {
            if (i == 0 && j == 0) {
                cur[0] = 0;
                continue;
            }

            if (i > 0 && prev[j] != INF) {
                int x = next_match(prev[j], a[i - 1]);
                cur[j] = min(cur[j], x);
            }

            if (j > 0 && cur[j - 1] != INF) {
                int x = next_match(cur[j - 1], b[j - 1]);
                cur[j] = min(cur[j], x);
            }
        }

        prev = cur;
    }

    cout << prev[m] << '\n';
    return 0;
}