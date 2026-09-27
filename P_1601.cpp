#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    vector<int> ans;
    cin >> a >> b;

    int carry = 0;
    for (int i = 0; i < max(a.size(), b.size()); ++i) {
        int m = (i < a.size() ? a[a.size() - i - 1] - '0' : 0);
        int n = (i < b.size() ? b[b.size() - i - 1] - '0' : 0);

        ans.push_back((m + n + carry) % 10);
        carry = (m + n + carry) / 10;
    }

    if (carry > 0) {
        cout << carry;
    }

    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[ans.size() - i - 1];
    }

    return 0;
}