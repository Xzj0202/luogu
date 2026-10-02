#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int budget;
    int hand = 0;
    int save = 0;

    for (int month = 1; month <= 12; ++month) {
        cin >> budget;

        hand += 300;

        if (hand < budget) {
            cout << -month << '\n';
            return 0;
        }

        hand -= budget;

        save += hand / 100 * 100;
        hand %= 100;
    }

    int total = hand + save * 120 / 100;
    cout << total << '\n';

    return 0;
}