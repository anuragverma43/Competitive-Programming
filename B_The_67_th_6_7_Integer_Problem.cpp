#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int a[7];
        int sum=0;
        for(int i=0;i<7;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        int m=a[0];
        for(int i=1;i<7;i++){
            m=max(m,a[i]);
        }
        cout<<(2*m-sum)<<endl;
    }
    return 0;
}