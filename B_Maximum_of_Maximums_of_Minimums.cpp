#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int _max=a[0];
    int _min=1e9;
    if(k==1){
        for(int i=0;i<n;i++){
            _min=min(_min,a[i]);
        }
        cout<<_min<<endl;
    }
    else if(k>=3){
        for(int i=0;i<n;i++){
            _max=max(_max,a[i]);
        }
        cout<<_max<<endl;
    }
    else if(k==2){
        cout<<max(a[0],a[n-1])<<endl;
    }
    return 0;
}