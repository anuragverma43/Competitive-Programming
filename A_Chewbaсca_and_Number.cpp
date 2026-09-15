#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll x;
    cin>>x;
    ll mn=x;
    vector<ll>digit;
    while(x>0){
        ll d=x%10;
        digit.push_back(d);
        x=x/10;
    }
    reverse(digit.begin(),digit.end());
    for(int i=0;i<digit.size();i++){
        if(i==0 &&digit[i]==9){
            continue;
        }
        if(9-digit[i]<digit[i]){
            digit[i]=9-digit[i];
        }
    }
    for(int i=0;i<digit.size();i++){
        cout<<digit[i];
    }
    cout<<endl;
    return 0;
}