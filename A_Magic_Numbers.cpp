#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int i = 0;
    int n = s.size();

    while (i < n) {
        if (i + 2 < n && s.substr(i, 3) == "144") {
            i += 3;
        }
        else if (i + 1 < n && s.substr(i, 2) == "14") {
            i += 2;
        }
        else if (s[i] == '1') {
            i += 1;
        }
        else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
}
