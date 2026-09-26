#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << fixed << setprecision(1)
         << 0.4463 * min(n, 150) + 0.4663 * min(max(0, n - 150), 250) + 0.5663 * max(0, n - 400);
    return 0;
}