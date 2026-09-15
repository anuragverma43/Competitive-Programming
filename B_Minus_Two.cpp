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
        int x=0,x1=0,x2=0;
        for(int i=0;i<n;i++){
            if(a[i]%2 !=0){
                x++;
            }
            else{
                int k=a[i]/2;
                if(k%2==0){
                    x1++;
                }
                else{
                    x2++;
                }
            }
        }
        cout<<max(x,max(x1,x2))<<endl;
    }

    return 0;
}