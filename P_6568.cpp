#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    long long cur = accumulate(A.begin(), A.begin() + k + 1, 0LL);
    long long ans = cur;

    for (int i = k + 1; i < n; ++i) {
        cur += A[i] - A[i - k - 1];
        ans = max(ans, cur);
    }

    cout << ans;
    return 0;
}