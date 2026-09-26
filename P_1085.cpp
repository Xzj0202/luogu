#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0, cur = 0;
    for (int i = 1; i <= 7; ++i) {
        int a, b;
        cin >> a >> b;

        if (a + b > cur) {
            cur = a + b;
            if (cur > 8) {
                ans = i;
            }
        }
    }

    cout << ans;
    return 0;
}