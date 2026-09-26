#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int l = 0, ans = 1;
    for (int r = 1; r < n; ++r) {
        if (a[r] != a[r - 1] + 1) {
            l = r;
        }
        ans = max(ans, r - l + 1);
    }

    cout << ans;
    return 0;
}