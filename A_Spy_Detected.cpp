#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int index;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            if((arr[i]!=arr[i+1])&&((arr[i+1]==arr[i+2]))){
                index=i;
            }
            else if((arr[i]!=arr[i+1])&&(arr[i]>arr[i+1])){
                index=i+1;
            }
        }
        cout<<index<<endl;
    }
}