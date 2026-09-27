#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> face(n);
    vector<string> name(n);

    for (int i = 0; i < n; ++i) {
        cin >> face[i] >> name[i];
    }

    int pos = 0;

    for (int i = 0; i < m; ++i) {
        int a, s;
        cin >> a >> s;

        if ((face[pos] ^ a) == 0) {
            pos = (pos - s % n + n) % n;
        } else {
            pos = (pos + s) % n;
        }
    }

    cout << name[pos] << '\n';
    return 0;
}