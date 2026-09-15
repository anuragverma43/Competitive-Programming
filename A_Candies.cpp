#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        for(int k=2;k<n;k++){
            int a=((pow(2,k))-1);
            if(n%a==0){
                x=n/a;
                break;
            }
        }
        cout<<x<<endl;
    }
}