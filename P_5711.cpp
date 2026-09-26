#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n % 100) {
        cout << int(n % 4 == 0);
    } else {
        cout << int(n % 400 == 0);
    }

    return 0;
}