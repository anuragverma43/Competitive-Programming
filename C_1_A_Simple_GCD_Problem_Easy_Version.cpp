#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll get_lcm(int x,int y){
    return (x/__gcd(x,y))*y;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll b[n];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        ll g[n-1];
        for(int i=0;i<n-1;i++){
            g[i]=__gcd(a[i],a[i+1]);
        }
        ll count=0;
        int m;
        for(int i=0;i<n;i++){
            if(i==0){
                m=g[0];
            }
            else if(i==n-1){
                m=g[n-2];
            }
            else{
                m=get_lcm(g[i-1],g[i]);
            }
            if(m<a[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}