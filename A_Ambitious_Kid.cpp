#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest=abs(arr[0]);
    for(int i=1;i<n;i++){
        if(abs(arr[i])<smallest){
            smallest=min(abs(arr[i]),smallest);
        }
    }
    cout<<smallest<<endl;
}