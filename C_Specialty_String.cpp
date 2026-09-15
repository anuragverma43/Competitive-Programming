#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       string empty="";
       for(int i=0;i<n;i++){
        if(empty.back()==s[i]){
            empty.pop_back();
        }
        else{
            empty=empty+s[i];
        }
       }
       if(empty.length()==0){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
}