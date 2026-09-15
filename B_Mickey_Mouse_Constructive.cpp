#include<bits/stdc++.h>
using namespace std;

long long count_divisors(long long n){
    if(n<0){
        n=-n;
    }
    if(n==0){
        return 0;
    }
    long long count=0;
    for(long long i=1;i*i<=n;i++) {
        if(n%i==0){
            count++;
            if(i*i!=n){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x, y;
        if(!(cin>>x>>y)){
            return 0;
        }
        if(x==y){
            cout<<1<<"\n";
        }
        else{
            long long diff=abs(x-y);
            long long result=count_divisors(diff);
            cout<<result % 676767677<<"\n";
        }
        for(int i=0;i<x;i++){
            cout<<1<<" ";
        }
        for(int i=0;i<y;i++) {
            cout<<-1<<" ";
        }
        cout<<"\n";
    }
}
