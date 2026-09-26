#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;

    cout << (2 * A + 3 * B + 5 * C) / 10;
    return 0;
}