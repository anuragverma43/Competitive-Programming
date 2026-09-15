#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<ll>c=a;
        sort(c.begin(),c.end());
        bool ok=false;
        for(int i=0;i<n;i++){
            if(c[i]>b[i]){
                ok=true;
            }
        }
        if(ok){
            cout<<-1<<endl;
            continue;
        }
        vector<ll>p(n);
        ll ans=0;
        for(int i=0;i<n;i++){
            ll count=0;
            for(int j=0;j<n;j++){
                if(p[j]){
                    continue;
                }
                if(a[j]<=b[i]){
                    p[j]=1;
                    ans+=count;
                    break;
                }
                count++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}