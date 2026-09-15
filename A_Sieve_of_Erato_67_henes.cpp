#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i=0; i<n;i++){
        cin>>a[i];
       }
       bool x=false;
       for(int i=0;i<n;i++){
        if(a[i]==67){
            x=true;
        }
       }
       if(x){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
}