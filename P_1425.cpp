#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int time = 60 * (c - a) + (d - b);
    cout << time / 60 << ' ' << time % 60;
}