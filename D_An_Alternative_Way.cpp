#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<ll>d(n);
        for(int i=0;i<n;i++){
            d[i]=b[i]-a[i];
        }
        ll sum=0;
        bool ok=true;
        for(int i=0;i<n;i++){
            sum+=d[i];
            if(sum<0){
                ok=false;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}