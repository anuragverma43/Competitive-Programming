#include<bits/stdc++.h>
using namespace std;
#define ll long long

int factor(ll a,ll b){
    ll result=1;
    for(ll i=2;i*i<=a;i++){
        if(a%i==0){
            if(i<=b){
                result=max(result,i);
            }
            if(a/i<=b){
                result=max(result,a/i);
            }
        }
    }
    return result;
}

bool isPrime(ll x){
    if(x<2){
        return false;
    }
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n<=k){
            cout<<1<<endl;
        }
        else{
            if(k==1){
                cout<<n<<endl;
            }
            else if(isPrime(n)){
                cout<<n<<endl;
            }
            else{
                cout<<n/factor(n,k)<<endl;
            }
        }
    }
    return 0;
}