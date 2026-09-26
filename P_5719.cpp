#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int sum1 = 0, cnt1 = 0;
    int sum2 = 0, cnt2 = 0;

    for (int i = 1; i <= n; ++i) {
        if (i % k == 0) {
            sum1 += i;
            ++cnt1;
        } else {
            sum2 += i;
            ++cnt2;
        }
    }

    cout << fixed << setprecision(1) << 1.0 * sum1 / cnt1 << ' ' << 1.0 * sum2 / cnt2;
    return 0;
}