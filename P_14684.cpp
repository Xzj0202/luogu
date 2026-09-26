#include <climits>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

long long a, b, c, k;

bool check(long long N, long long n, long long o1, long long o2) {
    long long cnt1 = (long long)((__int128)o1 * n / N);
    long long cnt2 = (long long)((__int128)o2 * n / N);
    if (cnt1 == 0 || cnt2 == 0) {
        return false;
    }
    __int128 total = (__int128)n * cnt1;
    if (total >= k)
        return true;
    total *= cnt2;
    return total >= k;
}

pair<long long, long long> solve_dim(long long N, long long o1, long long o2) {
    __int128 hi128 = (__int128)N * k;
    long long hi_n = (hi128 > LLONG_MAX) ? LLONG_MAX : (long long)hi128;
    long long lo = 1, hi = hi_n + 1;
    while (lo < hi) {
        long long mid = lo + ((hi - lo) >> 1);
        if (check(N, mid, o1, o2)) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    long long best_n = lo;
    long long p = N, q = best_n;
    long long g = std::gcd(p, q);
    p /= g;
    q /= g;
    return {p, q};
}

void solve() {
    cin >> a >> b >> c >> k;
    vector<pair<long long, long long>> cand;
    cand.push_back(solve_dim(a, b, c));
    cand.push_back(solve_dim(b, a, c));
    cand.push_back(solve_dim(c, a, b));
    auto cmp = [](const pair<long long, long long>& x, const pair<long long, long long>& y) {
        return (__int128)x.first * y.second > (__int128)y.first * x.second;
    };
    pair<long long, long long> best = cand[0];
    for (int i = 1; i < 3; ++i) {
        if (cmp(cand[i], best)) {
            best = cand[i];
        }
    }
    cout << best.first << " " << best.second << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}