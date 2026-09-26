#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    vector mat(n, vector<int>(2));

    for (int i = 0; i < n; ++i) {
        cin >> mat[i][0] >> mat[i][1];
    }

    cin >> x;
    for (int i = 0; i < n - 1; ++i) {
        if (mat[i][0] < x && mat[i + 1][0] > x) {
            cout << i + 1 << ' ' << i + 2;
            break;
        }
    }

    if (mat.back()[0] < x && mat[0][0] > x) {
        cout << n << ' ' << 1;
    }

    return 0;
}