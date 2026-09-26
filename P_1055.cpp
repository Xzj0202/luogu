#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int w = 1;
    int sum = 0;

    for (int i = 0; i < 12; ++i) {
        char ch = s[i];
        if (ch >= '0' && ch <= '9') {
            sum += (ch - '0') * w;
            ++w;
        }
    }

    int mod = sum % 11;
    char correct = (mod == 10) ? 'X' : '0' + mod;

    if (s.back() == correct) {
        cout << "Right\n";
    } else {
        s[12] = correct;
        cout << s << '\n';
    }

    return 0;
}