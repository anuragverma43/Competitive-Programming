#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long count=0;
        while(n%25 !=0 && n>24){
            n=n/10;
            count++;
        }
        cout<<count<<endl;
    }
}