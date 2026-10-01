#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    queue<int> q;
    stack<int> stk;
    priority_queue<int> MaxHeap;
    priority_queue<int, vector<int>, greater<>> MinHeap;
    vector<int> ans(4, 1);

    for (int i = 0; i < N; ++i) {
        int opt, v;
        cin >> opt >> v;

        if (opt == 1) {
            q.push(v);
            stk.push(v);
            MaxHeap.push(v);
            MinHeap.push(v);
        } else {
            if (q.empty()) {
                fill(ans.begin(), ans.end(), 0);
                break;
            } else {
                int t1 = q.front();
                int t2 = stk.top();
                int t3 = MaxHeap.top();
                int t4 = MinHeap.top();

                if (t1 != v) {
                    ans[0] = 0;
                }
                if (t2 != v) {
                    ans[1] = 0;
                }
                if (t3 != v) {
                    ans[2] = 0;
                }
                if (t4 != v) {
                    ans[3] = 0;
                }

                q.pop();
                stk.pop();
                MaxHeap.pop();
                MinHeap.pop();
            }
        }
    }

    for (int i = 0; i < 4; ++i) {
        cout << (ans[i] ? "Yes" : "No") << '\n';
    }

    return 0;
}