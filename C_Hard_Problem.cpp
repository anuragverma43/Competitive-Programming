#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long m,a,b,c;
        cin>>m>>a>>b>>c;
        
        long long row1=min(a,m);
        long long row2=min(b,m);
        long long remaining=2*m-(row1+row2);

        long long ans=row1+row2+min(c,remaining);
        cout<<ans<<endl;

    }
}