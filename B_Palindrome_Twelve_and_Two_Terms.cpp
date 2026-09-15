#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin>>n;
        ll a;
        ll rem=n%12;
        if(rem==10){
            a=22;
        }
        else if(rem<=9){
            a=rem;
        }
        else{
            a=11;
        }
        if(a>n){
            cout<<-1<<endl;
        }
        else{
            cout<<a<<" "<<n-a<<endl;
        }
    } 
    return 0;
}