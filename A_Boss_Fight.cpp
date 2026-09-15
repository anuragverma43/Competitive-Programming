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
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<ll,ll>freq;
        ll sum=0,maxi=0,k=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            freq[a[i]]++;
            if(freq[a[i]]>=maxi){
                maxi=freq[a[i]];
                k=a[i];
            }
            else if(freq[a[i]]==maxi){
                k=a[i];
            }
        }
        ll d=max(1LL*0,2*maxi-n-2);
        cout<<sum-d*k<<endl;
    }
    return 0;
}