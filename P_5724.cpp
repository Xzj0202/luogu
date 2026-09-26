#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, M = 0, m = 1001;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;

        M = max(M, a);
        m = min(m, a);
    }

    cout << M - m;
    return 0;
}