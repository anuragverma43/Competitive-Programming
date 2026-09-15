#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int e=0,o=0;
    for(int i=1;i<=n;i++){
        if(a[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    int x=1;
    if(e==1){
        for(int i=1;i<=n;i++){
            if(a[i]%2==0){
                x=i;
            }
        }
    }
    else{
        for(int i=1;i<=n;i++){
            if(a[i]%2!=0){
                x=i;
            }
        }
    }
    cout<<x<<endl;

    return 0;
}