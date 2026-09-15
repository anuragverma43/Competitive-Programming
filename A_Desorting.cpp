#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool ok=false;
        for(int i=0;i<n-1;i++){
            if(a[i+1]<a[i]){
                ok=true;
                break;
            }
        }
        if(ok){
            cout<<0<<endl;
            continue;
        }
        int ans=1e9;
        for(int i=0;i<n-1;i++){
            int steps=((a[i+1]-a[i])/2)+1;
            ans=min(ans,steps);
        }
        cout<<ans<<endl;
    }
}