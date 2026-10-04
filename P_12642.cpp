#include <cmath>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const double eps = 1e-6;
    int N;
    long long cur, ans = 0;
    double pre = 0, b;

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> cur;
        b = log2(cur);
        if (pre > b) {
            cur = ceil(pre - b - eps);
            ans += cur;
            b += cur;
        }
        pre = b;
    }

    cout << ans;
    return 0;
}