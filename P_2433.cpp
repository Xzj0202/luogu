#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    if (T == 1) {
        cout << "I love Luogu!";
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        cout << 14 / 4 << endl;
        cout << 14 / 4 * 4 << endl;
        cout << 14 % 4 << endl;
    } else if (T == 4) {
        cout << setprecision(6) << 500.0 / 3 << endl;
    } else if (T == 5) {
        cout << (260 + 220) / (12 + 20) << endl;
    } else if (T == 6) {
        cout << sqrt(9 * 9 + 6 * 6) << endl;
    } else if (T == 7) {
        int money = 100;
        money += 10;
        cout << money << endl;
        money -= 20;
        cout << money << endl;
        money = 0;
        cout << money << endl;
    } else if (T == 8) {
        double r = 5, pi = 3.141593;
        cout << 2 * pi * r << endl;
        cout << pi * r * r << endl;
        cout << 4.0 / 3 * pi * r * r * r << endl;
    } else if (T == 9) {
        int peach = 1;
        for (int i = 0; i < 3; i++) {
            peach = (peach + 1) * 2;
        }
        cout << peach << endl;
    } else if (T == 10) {
        cout << 9 << endl;
    } else if (T == 11) {
        cout << 100.0 / 3 << endl;
    } else if (T == 12) {
        cout << 'M' - 'A' + 1 << endl;
        cout << (char)('A' + 18 - 1) << endl;
    } else if (T == 13) {
        double pi = 3.141593;
        double v = 4.0 / 3 * pi * (4 * 4 * 4 + 10 * 10 * 10);
        cout << (int)pow(v, 1.0 / 3) << endl;
    } else if (T == 14) {
        cout << 50 << endl;
    }

    return 0;
}