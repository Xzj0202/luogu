#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    int div = 1;
    while (x / div >= 10) {
        div *= 10;
    }
    while (x > 0) {
        int left = x / div;
        int right = x % 10;
        if (left != right) {
            return false;
        }
        x = (x % div) / 10;
        div /= 100;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    vector<bool> isPrime(b + 1, true);
    vector<int> ans;
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= b; ++i) {
        if (isPrime[i]) {
            if (i >= a && isPalindrome(i)) {
                ans.push_back(i);
            }
            for (long long j = (long long)i * i; j <= b; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 0; i < ans.size(); ++i) {
        if (i > 0) {
            cout << '\n' << ans[i];
        } else {
            cout << ans[i];
        }
    }

    return 0;
}