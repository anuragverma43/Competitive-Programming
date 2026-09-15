#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--) {
        long long n,k;
        cin>>n>>k;
        long long m=n*k;
        long long p[m];
        for(long long i=0;i<m;i++){
            cin>>p[i];
        }
        long long sum=0;
        long long index=(n+1)/2;
        long long r=n-index;
        long long i=m-r-1;
        long long jump=r+1;
        for(long long j=0;j<k;j++){
            sum=sum+p[i];
            i=i-jump;
        }
        cout<<sum<<endl;
    }
}