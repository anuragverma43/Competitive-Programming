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
        bool ok=false;
        for(int i=0;i<n && !ok;i++){
            for(int j=i+1;j<n;j++){
                if(a[j]%a[i]%2==0){
                    cout<<a[i]<<" "<<a[j]<<endl;
                    ok=true;
                    break;
                }
            }
        }
        if(!ok){
            cout<<-1<<endl;
        }
    }
    return 0;
}