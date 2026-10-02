#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int X = 100; X >= 1; --X) {
        for (int K = 1;; ++K) {
            int total = 52 * (7 * X + 21 * K);
            if (total == N) {
                cout << X << "\n" << K << "\n";
                return 0;
            }
            if (total > N) {
                break;
            }
        }
    }

    return 0;
}