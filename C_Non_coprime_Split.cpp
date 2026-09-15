#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll l,r;
        cin>>l>>r;
        if(((l==r)&& isPrime(l))|| r<=3){
            cout<<-1<<endl;
        }
        else{
            if((l%2==0 && r%2!=0)||(l%2==0 && r%2==0)){
                cout<<r/2<<" "<<r/2<<endl;
            }
            else if(r%2==0 && l%2!=0){
                cout<<r/2<<" "<<r/2<<endl;
            }
            else if(l%2!=0  && r%2!=0 && r-l>=2){
                cout<<(r-1)/2<<" "<<(r-1)/2<<endl;
            }
            else{
                int d=-1;
                for(int i=2;i*i<=r;i++){
                    if(l%i==0){
                        d=i;
                        break;
                    }
                }
                int a=l/d;
                int b=l-a;
                cout<<a<<" "<<b<<endl;
            }
        }
    }
    return 0;
}