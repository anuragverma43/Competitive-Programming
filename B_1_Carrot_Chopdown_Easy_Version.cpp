#include<bits/stdc++.h> 
using namespace std; 
#define ll long long 
 
int main(){ 
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
 
    ll t; 
    cin >> t; 
 
    while(t--){ 
        int n,m; 
        cin>>n>>m; 
        vector<int>a(n); 
        for(int i=0;i<n;i++){ 
            cin>>a[i]; 
        }
        vector<int>freq(m+1);
        for(int i=0;i<n;i++){
            freq[a[i]]++;
        }
        vector<int>v(m+2);
        for(int i=m;i>=1;i--){
            v[i]=v[i+1]+freq[i];
        }
        int ans=0;
        for(int x=1;x<=m;x++){ 
            int ans1=v[x];
            if(2*x<=m){
                ans1+=freq[2*x];
            }
            ans=max(ans,ans1); 
        } 
        cout<<ans<<endl; 
    }
    return 0; 
}