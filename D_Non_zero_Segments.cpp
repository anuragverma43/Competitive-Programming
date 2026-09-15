#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6;
int a[N];
ll pf[N];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int count=0;
    for(int i=1;i<=n;i++){
        pf[i]=pf[i-1]+a[i];
        if(pf[i]==0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}