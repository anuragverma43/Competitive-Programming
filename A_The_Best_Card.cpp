#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int x){
    if(x<2){
        return false;
    }
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
            break;
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
        int n;
        cin>>n;
        if(isPrime(n+1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}