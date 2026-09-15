#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        int n;
        cin >> a >> b >> n;

        long long c[n];
        for(int i = 0; i < n; i++){
            cin >> c[i];
        }

        sort(c, c + n, greater<long long>());

        long long ans = b;
        for(int i = 0; i < n; i++){
            ans += min(c[i], a - 1);
        }

        cout << ans << endl;
    }
}