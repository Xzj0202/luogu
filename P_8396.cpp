#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<string, int> group;

    int x;
    cin >> x;
    vector<pair<string, string>> same(x);
    for (int i = 0; i < x; ++i) {
        cin >> same[i].first >> same[i].second;
    }

    int y;
    cin >> y;
    vector<pair<string, string>> diff(y);
    for (int i = 0; i < y; ++i) {
        cin >> diff[i].first >> diff[i].second;
    }

    int g;
    cin >> g;
    for (int i = 0; i < g; ++i) {
        string a, b, c;
        cin >> a >> b >> c;
        group[a] = group[b] = group[c] = i;
    }

    int ans = 0;

    auto check = [&](vector<pair<string, string>>& v, bool wantSame) {
        for (auto& p : v) {
            bool sameGroup = (group[p.first] == group[p.second]);
            if (sameGroup != wantSame) {
                ++ans;
            }
        }
    };

    check(same, true);
    check(diff, false);

    cout << ans << endl;
    return 0;
}