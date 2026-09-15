#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        ll count=0; 
        for(int i=0;i<n/2;i++){
            if(a[i]<c){
                count++;
            }
        }
        ll score=0;
        for(int i=count;i<n;i++){
            score+=a[i];
        }
        ll oper=n-count;
        ll sub=oper*c;
        cout<<score-sub<<"\n";
    }
    return 0;
}