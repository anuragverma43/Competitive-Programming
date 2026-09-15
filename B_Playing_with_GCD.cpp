#include<bits/stdc++.h>
using namespace std;
#define ll long long

int lcm(int x, int y){
    return (x*y)/__gcd(x,y);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b(n+1);
        b[0]=a[0];
        b[n]=a[n-1];
        for(int i=1;i<n;i++){
            b[i]=lcm(a[i-1],a[i]);
        }
        bool ok=true;
        for(int i=0;i<n;i++){
            if(__gcd(b[i],b[i+1])!=a[i]){
                ok=false;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}