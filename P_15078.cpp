#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    set<int> s;
    s.insert(0);

    for (int i = 0; i + 1 < n; ++i) {
        int x = a[i], y = a[i + 1];
        int A = x & y;
        int B = x ^ A;
        int C = y ^ A;

        s.insert(x);
        s.insert(y);
        s.insert(A);
        s.insert(B);
        s.insert(C);
        s.insert(B | C);
        s.insert(A | B | C);
    }

    cout << s.size();
    return 0;
}