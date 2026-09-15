#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool c1=false;
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            c1=true;
        }
    }
    bool c2=false;
    for(int i=n-2;i>=0;i++){
        if(a[i]<=a[i+1]){
            c2=true;
        } 
    }
    if(c1){
        cout<<"yes"<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else if(c2){
        cout<<"yes"<<endl;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}