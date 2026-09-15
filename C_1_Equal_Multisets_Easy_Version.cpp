#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        int a[n],b[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]==-1){
                count++;
            }
        }
        sort(a,a+n);
        sort(b,b+n);
        bool ok =false;
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                ok=true;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            if(count<=k){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}