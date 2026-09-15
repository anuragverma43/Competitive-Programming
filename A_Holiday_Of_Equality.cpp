#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int wealth=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxElement=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxElement){
            maxElement=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        wealth=wealth+(maxElement-arr[i]);
        }
    cout<<wealth<<endl;
    
}