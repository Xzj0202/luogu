#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double m, h;
    cin >> m >> h;

    if (m / h / h < 18.5) {
        cout << "Underweight";
    } else if (m / h / h < 24) {
        cout << "Normal";
    } else {
        cout << m / h / h << '\n' << "Overweight";
    }
    return 0;
}