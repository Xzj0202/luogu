#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Code {
    int label;
    int leaderScore;
    int memberScore;
    int total;
};

int main() {
    int n;
    cin >> n;

    vector<Code> codes(n);
    for (int i = 0; i < n; ++i) {
        codes[i].label = i + 1;
        codes[i].leaderScore = 0;
        codes[i].memberScore = 0;
    }

    for (int i = 0; i < n; ++i) {
        int idx;
        cin >> idx;
        codes[idx - 1].leaderScore = n - i;
    }

    vector<int> votes(n);
    for (int i = 0; i < n; ++i) {
        cin >> votes[i];
    }

    vector<int> order(n);
    for (int i = 0; i < n; ++i)
        order[i] = i;

    sort(order.begin(), order.end(), [&](int a, int b) { return votes[a] > votes[b]; });

    for (int rank = 0; rank < n; ++rank) {
        int idx = order[rank];
        codes[idx].memberScore = n - rank;
    }

    for (int i = 0; i < n; ++i) {
        codes[i].total = codes[i].leaderScore + codes[i].memberScore;
    }

    sort(codes.begin(), codes.end(), [](const Code& a, const Code& b) {
        if (a.total != b.total)
            return a.total > b.total;
        return a.memberScore > b.memberScore;
    });

    for (int i = 0; i < n; ++i) {
        printf("%d. Kod%02d (%d)\n", i + 1, codes[i].label, codes[i].total);
    }

    return 0;
}