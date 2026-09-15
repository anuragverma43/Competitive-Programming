#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        ll a,b;
        cin>>a>>b;
        if(b%2==1){
            if(a%2==1){
                cout<<a*b+1<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            if((a%2==1) && (b%4 !=0)){
                cout<<-1<<endl;
            }
            else{
                cout<<a*(b/2)+2<<endl;
            }
        }
    }
    return 0;
}