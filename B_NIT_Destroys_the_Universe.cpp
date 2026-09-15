#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        long long a[n+1];
        for(long long i=1;i<=n;i++){
            cin>>a[i];
        }
        long long count =0;
        for(long long i=1;i<=n;i++){
            if(a[i]!=0 && (i==1 || a[i-1]==0)){
                count++;
            }
        }
        if(count==0){
            cout<<0<<endl;
        }
        else if(count==1){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}