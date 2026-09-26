
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, v;
    cin >> s >> v;

    int time = 470 - (s + v - 1) / v;
    if (time < 0) {
        time += 1440;
    }

    cout << setw(2) << setfill('0') << time / 60 << ':' << setw(2) << setfill('0') << time % 60;
}