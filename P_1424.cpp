#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;

    int days = 0;
    for (int i = 0; i < n; ++i) {
        int today = (x - 1 + i) % 7 + 1;
        if (today >= 1 && today <= 5) {
            ++days;
        }
    }

    cout << days * 250 << endl;
    return 0;
}