#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i=1; i<=n;i++){
        cin>>a[i];
       }
       bool x=true;
       for(int i=1;i<=n;i++){
        int it=i;
        int e=a[i];
        while(it%2==0){
            it=it/2;
        }
        while(e%2==0){
            e=e/2;
        }
        if(e!=it){
            x=false;
            break;
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