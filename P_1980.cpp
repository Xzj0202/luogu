#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    long long ans = 0;
    long long factor = 1;

    while (factor <= n) {
        long long high = n / (factor * 10);
        long long cur = (n / factor) % 10;
        long long low = n % factor;

        if (x != 0) {
            if (cur > x) {
                ans += (high + 1) * factor;
            } else if (cur == x) {
                ans += high * factor + low + 1;
            } else {
                ans += high * factor;
            }
        } else {
            if (cur > 0) {
                ans += high * factor;
            } else if (cur == 0) {
                ans += (high - 1) * factor + low + 1;
            }
        }

        factor *= 10;
    }

    cout << ans << '\n';
    return 0;
}