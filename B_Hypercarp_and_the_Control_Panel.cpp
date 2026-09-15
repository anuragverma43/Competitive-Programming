#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_map<int,int>freq;
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,freq[a[i]]++);
        }
        int rem=n-maxi;
        cout<<min(n,2*rem+1)<<endl;
    }
    return 0;
}