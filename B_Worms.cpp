#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int>q(m+1);
    for(int i=1;i<=m;i++){
        cin>>q[i];
    }
    vector<int>p(n+1);
    p[0]=0;
    for(int i=1;i<=n;i++){
        p[i]=p[i-1]+a[i];
    }
    vector<int>ans;
    for(int i=1;i<=m;i++){
        int idx = lower_bound(p.begin()+1,p.end(),q[i])-p.begin();
        ans.push_back(idx);
    }
    for(int x:ans){
        cout<<x<<endl;
    }
    return 0;
}