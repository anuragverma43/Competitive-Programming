#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=x;
        vector<int>p;
        for(int i=2;i<=i*i;i++){
            if(c%i==0){
                p.push_back(i);
                while(c%i==0){
                    c=c/i;
                }
            }
        }
        if(c>1){
            p.push_back(c);
        }
        ll ans=0;
        for(int i=0;i<p.size();i++){
            ll sum=0;
            for(int j=0;j<n;j++){
                if(a[j]%p[i]==0){
                    sum+=a[j];
                }
            }
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}