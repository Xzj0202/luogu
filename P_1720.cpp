#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<double> F(n + 1);
    F[1] = 1;

    for (int i = 2; i <= n; ++i) {
        F[i] = F[i - 1] + F[i - 2];
    }

    cout << fixed << setprecision(2) << F.back();
    return 0;
}