#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans=0;
    for(int i=0;i*a<=n;i++){
        for(int j=0;i*a+j*b<=n;j++){
            int r=n-a*i-b*j;
            if(r%c==0){
                ans=max(ans,i+j+r/c);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}