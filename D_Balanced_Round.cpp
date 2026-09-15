#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int maxlen=1;
        int currlen=1;
        for(int i=1;i<n;i++){
            if((arr[i]-arr[i-1])<=k){
                currlen++;
            }
            else{
                currlen=1;
            }
            maxlen=max(maxlen,currlen);
        }

        cout<<(n-maxlen)<<endl;
    }
}