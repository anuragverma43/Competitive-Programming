#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,s,x;
        cin >>n>>s>>x;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        if((sum<=s) &&((s-sum)%x==0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}