#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            count++;
        }
    }
    if(count==n){
        cout<<n-1<<endl;
    }
    else{
        int current=0,maxi=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                current++;
            }
            else{
                current--;
            }
            maxi=max(maxi,current);
            if(current<0){
                current=0;
            }
        }
        cout<<count+maxi<<endl;
    }
    return 0;
}