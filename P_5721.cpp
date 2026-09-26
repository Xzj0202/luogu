#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int num = 1;
    for (int i = n; i >= 1; --i) {
        for (int j = 0; j < i; ++j) {
            cout << setw(2) << setfill('0') << num;
            ++num;
        }
        cout << endl;
    }
    return 0;
}