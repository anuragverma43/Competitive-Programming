#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        long long sum1=0;
        long long sum2=0;
        for(long long i=0;i<n;i++){
            if(a[i]%x==0){
                sum1=sum1+(a[i]/x);
            }
            else{
                sum1=sum1+((a[i]/x)+1);
            }
            sum2=sum2+a[i];
            
        }
        long long min=(sum2+x-1)/x;
        cout<<min<<" "<<sum1<<endl;
    }
}