#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int v[3];
    cin >> v[0] >> v[1] >> v[2];
    sort(v, v + 3);

    string s;
    cin >> s;

    for (int i = 0; i < 3; ++i) {
        if (i) {
            cout << ' ';
        }
        cout << v[s[i] - 'A'];
    }
    cout << '\n';

    return 0;
}