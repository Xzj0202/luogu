#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double t;
    int n;
    cin >> t >> n;

    printf("%.3f\n", t / n);
    printf("%d\n", n * 2);

    return 0;
}