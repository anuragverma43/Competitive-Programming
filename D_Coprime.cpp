#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        unordered_map<int,int>m;
        for(int i=1;i<=n;i++){
            m[a[i]]=i;
        }
        int ans=-1;
        for(auto i:m){
            for(auto j:m){
                if(__gcd(i.first,j.first)==1){
                    ans=max(ans,i.second+j.second);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}