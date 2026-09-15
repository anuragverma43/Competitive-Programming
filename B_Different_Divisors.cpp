#include<bits/stdc++.h>
using namespace std;
#define ll long long
int isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int a=d+1;
        while(!isPrime(a)){
            a++;
        }
        int b=a;
        int c=b+d;
        while(!isPrime(c)){
            c++;
        }
        int e=c;
        cout<<e*b<<endl;
    }
    return 0;
}