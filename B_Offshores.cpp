#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,y;
        cin>>n>>x>>y;
        int a[n];
        long long no_oftransfer=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            no_oftransfer+=a[i]/x;
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            long long from_ith=a[i]/x;
            long long total=a[i]+(no_oftransfer-from_ith)*y;
            ans=max(ans,total);
        }
        cout<<ans<<endl;
    }
}