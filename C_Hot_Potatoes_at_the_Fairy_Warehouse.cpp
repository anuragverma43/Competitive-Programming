#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll total=0,even=0;
        for(int i=0;i<2*n;i++){
            if(s[i]=='1'){
                total++;
                if((i+1)%2==0){
                    even++;
                }
                int j=(i+1)%(2*n);
                if(s[j]=='0'){
                    if((i+1)%2!=0){
                        even++;
                    }
                    else{
                        even--;
                    }
                }
            }
        }
        cout<<even<<" "<<total-even<<endl;
    }
    return 0;
}