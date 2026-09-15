#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool equal=true;
        for(int i=1;i<n;i++){
            if(a[i]!=a[0]){
                equal=false;
                break;
            }
        }
        if(equal){
            cout<<"NO"<<endl;
            continue;
        }
        else{
           cout<<"YES"<<endl;
           cout<<a[n-1]<<" ";
           for(int i=0;i<n-1;i++){
              cout<<a[i]<<" ";
           }
        }
        cout<<endl;

    }
}