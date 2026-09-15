#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n){
    if(n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
ll lcm(ll a,ll b){
    ll result=a*b/(__gcd(a,b));
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else if(isPrime(n)){
            cout<<1<<" "<<(n-1)<<endl;
        }
        else{
            int d=-1;
            for(int i=3;i*i<=n;i++){
                if(n%i==0){
                    d=i;
                    break;
                }
            }
            ll a=n/d;
            cout<<a<<" "<<n-a<<endl;
        }
    }
    return 0;
}