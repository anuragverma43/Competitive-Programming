#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int k;
        cin>>k;
        vector<int>a(k);
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        int count1=0,count2=0;
        for(int i=0;i<k;i++){
            if(a[i]>=3){
                count1++;
            }
            else if(a[i]==2){
                count2++;
            }
        }
        if(count1>0 || count2>=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}