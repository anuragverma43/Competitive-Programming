#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        int first=-1;
        int last=-1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1){
                if(first==-1)
                    first=i;
                    last=i;
            }
        }
        if(last-first+1<=x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}