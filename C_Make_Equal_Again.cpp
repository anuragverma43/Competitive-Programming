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
        vector<ll>a(n+1);
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        ll i=1;
        while(i<=n && a[i]==a[1]){
            i++;
        }
        ll j=n;
        while(j>=1 && a[j]==a[1]){
            j--;
        }
        ll cost1=(j-i+1);


        ll i2=n;
        while(i2>=1 && a[i2]==a[n]){
            i2--;
        }
        ll j2=1;
        while(j2<=n && a[j2]==a[i]){
            j2++;
        }
        ll cost2=(i2-j2+1);
        if(i>n){
            cout<<0<<endl;
        }
        else{
            cout<<min(cost1,cost2)<<endl; 
        }
    }
    return 0;
}