#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2!=0 || n<4){
            cout<<-1<<endl;
        }
        else{
            cout<<(n+6-1)/6<<" "<<n/4<<endl;
        }
    }
}