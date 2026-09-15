#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;

ll power(ll a,ll b){
    ll result=1;
    while(b){
        if(b%2==1){
            result=result*a%mod;
        }
        a=a*a%mod;
        b>>=1;
    }
    return result;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        vector<int> v;
        ll m=0;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x==-1){
                m++;
            }
            else{
                v.push_back(x);
            }
        }
        int d=0,p=0;
        for(int i=0;i<v.size();i++){
            if(i==0 || v[i]!=v[i-1]){
                d++;
                if(i && v[i]==v[i-1]+1){
                    p++;
                }
            }
        }
        if(m==0){
            cout<<power(2,n-d)%mod<<endl;
        }
        else{
            cout<<power(2,n-d-1)*(p+1)%mod<<endl;
        }
    }
}