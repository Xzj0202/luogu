#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 31; i >= 0; --i) {
        if (n & (1 << i)) {
            cout << i + 1;
            break;
        }
    }

    return 0;
}