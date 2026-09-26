#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char ch;
    cin >> ch;
    cout << char(ch - 32);

    return 0;
}