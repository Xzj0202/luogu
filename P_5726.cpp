#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum = 0, M = 0, m = 10;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        sum += num;
        M = max(M, num);
        m = min(m, num);
    }

    cout << fixed << setprecision(2) << double(sum - M - m) / (n - 2);
}