#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>results;
        for(int i=0;i<n;i++){
            int m_x=0;
            int min=0;
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]){
                    m_x++;
                }
                else if(a[j]<a[i]){
                    min++;
                }
            }
            results.push_back(max(m_x,min));
        }
        for(int x:results){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}