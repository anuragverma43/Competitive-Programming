#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int a,b;
        cin>>a>>b;
        int xr=0;
        for(int i=0;i<a;i++){
            xr=xr^i;
        }
        if(xr==b){
            cout<<a<<endl;
        }
        else if((xr^b)!=a){
            cout<<a+1<<endl;
        }
        else{
            cout<<a+2<<endl;
        }
    }
    return 0;
}