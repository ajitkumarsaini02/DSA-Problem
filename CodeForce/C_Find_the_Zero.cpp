#include <bits/stdc++.h>
using namespace std;

int ask(int i, int j) {
    cout << "? " << i << " " << j << endl;
    cout.flush();
    int x;
    cin >> x;
    if (x == -1) exit(0);
    return x;
}

void solve() {
    int n;
    cin >> n;

    // Query n-2 disjoint pairs.
    // If any pair answers 1, both positions are zero (non-zero values are unique),
    // so we can immediately output one endpoint.
    for (int i = 1; i <= 2 * (n - 2); i += 2) {
        if (ask(i, i + 1) == 1) {
            cout << "! " << i << endl;
            cout.flush();
            return;
        }
    }

    // Remaining four indices contain at least two zeros.
    // Let them be x1, x2, x3, x4 and use a 3-query decision tree:
    // 1) if (x1, x2) == 1 => x1 is zero
    // 2) else if (x1, x3) == 1 => x1 is zero
    // 3) else if (x2, x3) == 1 => x2 is zero
    // 4) else x4 must be zero (among x1,x2,x3 at most one zero, but total >= 2)
    int x1 = 2 * n - 3;
    int x2 = 2 * n - 2;
    int x3 = 2 * n - 1;
    int x4 = 2 * n;

    if (ask(x1, x2) == 1) {
        cout << "! " << x1 << endl;
    } else if (ask(x1, x3) == 1) {
        cout << "! " << x1 << endl;
    } else if (ask(x2, x3) == 1) {
        cout << "! " << x2 << endl;
    } else {
        cout << "! " << x4 << endl;
    }

    cout.flush();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}