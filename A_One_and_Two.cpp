#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count=0;
    while(t--){
        int n;
        cin>> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2){
                count++;
            }
        }
        if(count%2!=0){
            cout<<-1<<endl;
        }
    }
}