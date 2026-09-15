#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        ll d1=-1,d2=-1;
        vector<ll>v;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                d1=i;
                n=n/i;
                break;
            }
        }
        bool c1=true;
        if(d1==-1){
            c1=false;
        }
        else{
            v.push_back(d1);
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0 && i!=d1){
                d2=i;
                n=n/i;
                break;
            }
        }
        bool c2=true;
        if(d2==-1){
            c2=false;
        }
        else{
            v.push_back(d2);
        }
        bool c3=false;
        if(n!=d1 && n!=d2){
            v.push_back(n);
            c3=true;
        }
        if(c1 && c2 && c3){
            cout<<"YES"<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }  
    }
    return 0;
}