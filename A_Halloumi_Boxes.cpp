#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        if(k>=2){
            cout<<"YES"<<endl;
        }
        else{
            sort(b,b+n);
            bool sorted=true;
            for(int i=0;i<n;i++){
                if(b[i]!=a[i]){
                    sorted=false;
                }
            }
            if(sorted){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}