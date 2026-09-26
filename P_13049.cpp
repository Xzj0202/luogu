#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int tc = 1; tc <= T; ++tc) {
        string S;
        cin >> S;

        string ans;
        int cur = 0;

        for (char ch : S) {
            int d = ch - '0';

            while (cur < d) {
                ans.push_back('(');
                ++cur;
            }
            while (cur > d) {
                ans.push_back(')');
                --cur;
            }

            ans.push_back(ch);
        }

        while (cur > 0) {
            ans.push_back(')');
            --cur;
        }

        cout << "Case #" << tc << ": " << ans << '\n';
    }

    return 0;
}