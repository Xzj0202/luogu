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

    if (a == "0" || b == "0") {
        cout << '0';
        return 0;
    }

    for (int i = 0; i < a.size(); ++i) {
        int m = a[a.size() - i - 1] - '0';
        for (int j = 0; j < b.size(); ++j) {
            int n = b[b.size() - j - 1] - '0';
            while (ans.size() <= i + j) {
                ans.push_back(0);
            }
            ans[i + j] += m * n;
        }
    }

    int carry = 0;
    for (int i = 0; i < ans.size(); ++i) {
        int val = ans[i] + carry;
        ans[i] = val % 10;
        carry = val / 10;
    }

    if (carry > 0) {
        cout << carry;
    }

    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[ans.size() - i - 1];
    }

    return 0;
}