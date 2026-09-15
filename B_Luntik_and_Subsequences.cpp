#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long count_0=0;
        long long count_1=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count_0++;
            }
            else if(a[i]==1){
                count_1++;
            }
        }
        cout<<count_1*(1LL<<count_0)<<endl;
    }
}