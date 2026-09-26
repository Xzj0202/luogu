#include <cmath>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c;
    cin >> a >> b >> c;

    double p = (a + b + c) / 2.0;
    printf("%.1f", sqrt(p * (p - a) * (p - b) * (p - c)));
    return 0;
}