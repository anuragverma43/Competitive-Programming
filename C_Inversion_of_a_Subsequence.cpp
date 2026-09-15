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
        vector<int>a(n),b(n);;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int c1=0,c2=0,c3=0,c4=0;
        for(int i=0;i<n;i++){
            if(a[i]==0&&b[i]==0){
                c1++;
            }
            else if(a[i]==0&&b[i]==1){
                c2++;
            }
            else if(a[i]==1&&b[i]==0){
                c3++;
            }
            else if(a[i]==1&&b[i]==1){
                c4++;
            }
        }
        if(c2==0&& c3==0){
            cout<<0<<endl;
        }
        else if(c3 % 2!=0){
            cout<<1<<endl;
        }
        else if(c2 % 2==0 && c3>0){
            cout<<2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}