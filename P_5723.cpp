#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int L;
    cin >> L;

    int sum = 0, cnt = 0;
    vector<bool> isPrime(100005, true);
    isPrime[0] = isPrime[1] = false;

    bool first = true;
    for (int i = 2; i < 100005; ++i) {
        if (isPrime[i]) {
            if (sum + i > L)
                break;
            sum += i;
            ++cnt;
            if (!first)
                cout << '\n';
            cout << i;
            first = false;

            for (int j = i * i; j < 100005; j += i) {
                isPrime[j] = false;
            }
        }
    }

    if (!first)
        cout << '\n';
    cout << cnt;
    return 0;
}