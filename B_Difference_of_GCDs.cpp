#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,l,r;
        cin>>n>>l>>r;
        vector<int>a;
        bool ok=true;
        for(int i=1;i<=n;i++){
            int k=0;
            if(l%i==0){
                k=l/i;
            }
            else{
                k=l/i+1;
            }
            if(k*i>r){
                ok=false;
            }
            a.push_back(k*i);
        }
        if(!ok){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<a.size();i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }   
    }
    return 0;
}