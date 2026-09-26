#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ans = 1005;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        ans = min(ans, num);
    }

    cout << ans;
    return 0;
}