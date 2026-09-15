#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
 
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
           cin>>a[i];
        }
        vector<ll>freq(n+1,0);
        for(int i=0;i<n;i++){
            freq[a[i]]++;
        }
        int count1=0,count=freq[k];
        for(int i=0;i<k;i++){
            if(freq[i]==0){
                count1++;
            }
        }
        cout<<max(count,count1)<<endl;
    }
    return 0;
}