#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    cout << "Today, I ate " << x << " apple" << (x > 1 ? "s." : ".");
    return 0;
}