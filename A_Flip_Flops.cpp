#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,c,k;
        cin>>n>>c>>k;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(c>=a[i]){
                if(k>=(c-a[i])){
                    k=k-(c-a[i]);
                    c=2*c;
                }
                else{
                    c=c+a[i]+k;
                    k=0;
                }
            }
        }
        cout<<c<<endl;
    }
}