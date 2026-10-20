#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(a[0]!=1){
            cout<<"NO"<<endl;
            continue;
        }
        ll sum=1;
        bool ok=true;
        for(int i=1;i<n;i++){
            if(a[i]>sum){
                ok=false;
                break;
            }
            sum+=a[i];
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