#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (b > c) {
        swap(b, c);
    }

    if (a + b <= c) {
        cout << "Not triangle\n";
        return 0;
    }

    int n = a * a + b * b - c * c;

    if (n == 0) {
        cout << "Right triangle\n";
    } else if (n > 0) {
        cout << "Acute triangle\n";
    } else {
        cout << "Obtuse triangle\n";
    }

    if (a == b || b == c) {
        cout << "Isosceles triangle\n";
        if (a == c) {
            cout << "Equilateral triangle\n";
        }
    }

    return 0;
}