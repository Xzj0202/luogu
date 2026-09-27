#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w11 = 0, l11 = 0;
    int w21 = 0, l21 = 0;
    vector<pair<int, int>> ans11, ans21;
    while (true) {
        char ch;
        cin >> ch;

        // 如果输入结束（EOF），也要退出
        if (cin.eof()) {
            ans11.emplace_back(w11, l11);
            ans21.emplace_back(w21, l21);
            break;
        }

        if (ch == 'E') {
            ans11.emplace_back(w11, l11);
            ans21.emplace_back(w21, l21);
            break;
        }

        if (ch == 'W') {
            ++w11;
            ++w21;
        } else if (ch == 'L') {
            ++l11;
            ++l21;
        }

        if ((w11 >= 11 || l11 >= 11) && abs(w11 - l11) >= 2) {
            ans11.emplace_back(w11, l11);
            w11 = 0;
            l11 = 0;
        }
        if ((w21 >= 21 || l21 >= 21) && abs(w21 - l21) >= 2) {
            ans21.emplace_back(w21, l21);
            w21 = 0;
            l21 = 0;
        }
    }

    for (pair<int, int> p : ans11) {
        cout << p.first << ':' << p.second << '\n';
    }

    cout << '\n';

    for (pair<int, int> p : ans21) {
        cout << p.first << ':' << p.second << '\n';
    }

    return 0;
}