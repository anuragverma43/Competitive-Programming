#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max_so_far=a[0];
        for(int i=1;i<n;i++){
            if(a[i]<max_so_far){
                count++;
            }
            else{
                max_so_far=a[i];
            }
        }
        cout<<count<<endl;
        
    }
}