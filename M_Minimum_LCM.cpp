#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2==0){
            cout<<(n/2)<<" "<<(n/2)<<endl;
        }
        else{
            long long p=n;
            for(long long i=2;i*i<=n;i++){
                if(n%i==0){
                    p=i;
                    break;
                }
            }
            cout<<(n/p)<<" "<<(n-(n/p))<<endl;
        }
    }
}