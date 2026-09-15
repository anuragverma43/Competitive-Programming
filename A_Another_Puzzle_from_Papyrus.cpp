#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        ll cost=0;
        bool ok=true;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                ok=false;
            }
            cost+=(a[i]-b[i]);
        }
        if(ok){
            cout<<cost<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool x=true;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                x=false;
                break;
            }
        }
        if(x){
            cout<<cost+c<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}