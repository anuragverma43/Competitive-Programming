#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int curr = 1;
    int ans = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] >= arr[i - 1]) {
            curr++;
        } else {
            curr = 1;
        }
        ans = max(ans, curr);
    }

    cout << ans << endl;
    return 0;
}
