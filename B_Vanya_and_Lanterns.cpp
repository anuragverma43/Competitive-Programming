#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        ll n,l;
        cin>>n>>l;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll maxi=0;
        for(ll i=0;i<n-1;i++){
            maxi=max(maxi,(a[i+1]-a[i]));
        }
        double d1=a[0];
        double d2=l-a[n-1];
        double mx=maxi;
        cout<<fixed<<setprecision(10)<<max(mx/2.0,max(d1,d2))<<endl;
    return 0;
}