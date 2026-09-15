#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        int p[n];
        int i,j,k;
        for(int m=1;m<=n;m++){
            cin>>p[m];
        }
        bool x = false;
        for(int m=2;m<=n-1;m++) {
            if(p[m]>p[m-1]&&p[m]>p[m+1]){
                x=true;
                i=m-1;
                j=m;
                k=m+1;
            }   
        }
        if(x){
            cout<<"YES"<<endl;
            cout<<i<<" "<<j<<" "<<k<<" "<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}