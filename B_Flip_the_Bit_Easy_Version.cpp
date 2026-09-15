#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int p;
        cin>>p;
        p--;
        int c_L=0;
        for (int i=0;i<p;i++) {
            if(a[i] !=a[i+1]) {
                c_L++;
            }
        }
        int c_R=0;
        for(int i=p;i<n-1;i++) {
            if (a[i] !=a[i+1]) {
            c_R++;
            }
        }
        int ans=max(c_L,c_R);
        if(ans%2 !=0) {
            ans++;
        }
        cout<<ans<<endl;
    }    
    return 0;
}