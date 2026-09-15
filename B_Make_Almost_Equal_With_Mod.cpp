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
        ll p=a[0];
        bool c1=false,c2=false;
        if(a[0]%2==0){
            for(int i=1;i<n;i++){
                if(a[i]%2!=0){
                    c1=true;
                    break;
                }
            }
        }
        else{
            for(int i=1;i<n;i++){
                if(a[i]%2==0){
                    c2=true;
                    break;
                }
            }
        }
        if(c1 || c2){
            cout<<2<<endl;
        }
        else{
            ll k=2;
            while(true){
                set<ll>s;
                for(auto x:a){
                    s.insert(x%k);
                }
                if(s.size()==2){
                    cout<<k<<endl;;
                    break;
                }
            k*=2;
            }
        }
    }
    return 0;
}