#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n + 1, 0);
        vector<bool> used(n + 1, false);
        p[n] = n;
        used[n] = true;

        for (int i = n - 1; i >= 1; i--) {
            int option1 = p[i + 1] - i;
            int option2 = p[i + 1] + i;

            if (option1 >= 1 && option1 <= n && !used[option1]) {
                p[i] = option1;
            } else {
                p[i] = option2;
            }
            used[p[i]] = true;
        }

        for (int i = 1; i <= n; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
