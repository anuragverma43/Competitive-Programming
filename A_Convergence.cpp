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
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll mid=v[n/2],count1=0,count2=0;
        for(ll i=0;i<n;i++){
            if(v[i]<mid){
                count1++;
            }
            else if(v[i]>mid){
                count2++;
            }
        }
        ll maxi=max(count1,count2);
        cout<<maxi<<endl;
    }
    return 0;
}