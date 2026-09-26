#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y, m;
    cin >> y >> m;

    if ((m <= 7 && m % 2 == 1) || (m >= 8 && m % 2 == 0)) {
        cout << 31;
    } else if (m == 2) {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
            cout << 29;
        } else {
            cout << 28;
        }
    } else {
        cout << 30;
    }

    return 0;
}