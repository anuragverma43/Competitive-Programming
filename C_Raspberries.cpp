#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool ok=false;
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]%k==0){
                ok=true;
                break;
            }
        }
        if(ok){
            cout<<0<<endl;
        }
        else{
            int ans = 1e9;
            for(int i=0;i<n;i++){
                int need=(k-(a[i]%k))% k;
                ans=min(ans,need);
            }
             if(k == 4){
                int even = 0;
                for(int i=0;i<n;i++){
                   if(a[i]%2==0){
                    even++;
                   }
                }
            if(even>=2){
                ans = 0;
            }
            else if(even==1){
                ans=min(ans,1);
            }
            else{
                ans=min(ans,2);
            }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}