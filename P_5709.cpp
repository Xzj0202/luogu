#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, t, s;
    cin >> m >> t >> s;

    if (t == 0) {
        cout << 0;
        return 0;
    }
    cout << max(0, m - (s + t - 1) / t);
    return 0;
}