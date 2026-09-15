#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;

        int cntH = 0, cntL = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= h) cntH++;
            if (x <= l) cntL++;
        }

        int ans = min({cntH, cntL, n / 2});
        cout << ans << '\n';
    }
    return 0;
}
