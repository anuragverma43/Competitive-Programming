#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool ok=true;
        for(int i=1;i<n;i++){
            if(a[i]!=a[0]){
                ok=false;
            }
        }
        if(ok){
            cout<<-1<<endl;
        }
        else{
            vector<int>b;
            vector<int>c;
            int m_x=0;
            for(int i=0;i<n;i++){
                m_x=max(m_x,a[i]);
            }
            for(int x:a){
                if(x==m_x){
                    c.push_back(x);
                }
                else{
                    b.push_back(x);
                }
            }
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int x:b){
                cout<<x<<" ";
            }
            cout<<endl;
            for(int x:c){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}