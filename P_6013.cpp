#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, ans = 0;
    long long cur = 0;
    cin >> m;

    vector<long long> unlock(m + 2);

    for (int i = 1; i <= m; ++i) {
        cur += unlock[i];

        int type;
        cin >> type;

        if (type == 1) {
            int a;
            cin >> a;
            cur += a;
        } else if (type == 2) {
            int a;
            cin >> a;
            if (cur >= a) {
                cur -= a;
            } else {
                ++ans;
            }
        } else {
            int a, b;
            cin >> a >> b;
            cur -= a;
            unlock[b] += a;
        }
    }

    cout << ans;
    return 0;
}