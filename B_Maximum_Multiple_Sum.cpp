#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int goodx=2;
        int goodsum=0;
        for(int x=2;x<=n;x++){
            int k=n/x;
            int sum=x*(k*(k+1)/2);
            if(sum>goodsum){
                goodsum=sum;
                goodx=x;
            }
        }
        cout<<goodx<<endl;
    }
}