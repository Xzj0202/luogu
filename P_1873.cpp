#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    long long M;
    cin >> N >> M;

    int l = 0, r = 0;
    vector<int> height(N);
    for (int i = 0; i < N; ++i) {
        cin >> height[i];
        r = max(r, height[i]);
    }

    while (l < r) {
        int mid = l + ((r - l) >> 1);
        long long total = 0;

        for (int i = 0; i < N; ++i) {
            total += max(0, height[i] - mid);
        }

        if (total >= M) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }

    cout << l - 1;
    return 0;
}