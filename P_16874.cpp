#include <iostream>
using namespace std;

bool isPalindrome(long long x) {
    long long original = x, reversed = 0;
    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    return original == reversed;
}

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        long long A;
        cin >> A;

        int count = 0;
        for (long long i = 1; i * i <= A; ++i) {
            if (A % i == 0) {
                if (isPalindrome(i)) {
                    ++count;
                }
                long long j = A / i;
                if (j != i && isPalindrome(j)) {
                    ++count;
                }
            }
        }

        cout << "Case #" << caseNum << ": " << count << endl;
    }

    return 0;
}