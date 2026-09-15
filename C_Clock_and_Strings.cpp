#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int mn=min(a,b);
        int mx=max(a,b);
        if((mn<=c&&c<=mx)&&((d<mn)||(d>mx))){
            cout<<"YES"<<endl;
        }
        else if((mn<=d&&d<=mx)&&((c<mn)||(c>mx))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}