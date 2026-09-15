#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        ll cur_min = 2e18;
        ll total_pref = 0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            cur_min = min(cur_min, a[i]);
            total_pref += cur_min;
        }

        cout << min(total_pref, a[0]) <<endl;
    }
    return 0;
}