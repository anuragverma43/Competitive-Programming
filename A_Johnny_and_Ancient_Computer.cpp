#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long count=0;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        if(a>b){
            if(a%b!=0){
                cout<<-1<<endl;
                continue;
            }
            long long x = a/b;
            while(x%8==0){
                x/=8;
                count++;
            }
            while(x%4==0){
                x/=4;
                count++;
            }
            while(x%2==0){
                x/=2;
                count++;
            }
            if(x!=1) cout<<-1<<endl;
            else cout<<count<<endl;
        }
        else{
            if(b%a!=0){
                cout<<-1<<endl;
                continue;
            }
            long long x = b/a;
            while(x%8==0){
                x/=8;
                count++;
            }
            while(x%4==0){
                x/=4;
                count++;
            }
            while(x%2==0){
                x/=2;
                count++;
            }
            if(x!=1) cout<<-1<<endl;
            else cout<<count<<endl;
        }
    }
}