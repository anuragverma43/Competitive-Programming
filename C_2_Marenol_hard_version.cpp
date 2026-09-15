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
        string a,b;
        cin>>a;
        cin>>b;
        int o1=0,e1=0,ob1=0,eb1=0;
        for(int i=0;i<n;i++){
            if(i%2==0 && a[i]=='1'){
                o1++;
            }
            if(i%2==1 && a[i]=='1'){
                e1++;
            }
            if(i%2==0 && b[i]=='1'){
                ob1++;
            }
            if(i%2==1 && b[i]=='1'){
                eb1++;
            }
        }
        bool ok=false;
        if(o1==ob1 && e1==eb1){
            ok=true;
        }
        if(!ok){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                
            }
        }
    }
    return 0;
}