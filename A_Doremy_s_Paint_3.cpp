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
        sort(a,a+n);
        int count=1;
        int count1=1,count2=0;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                count++;
            }
        }
        if(count==1){
            cout<<"Yes"<<endl;
        }
        else if(count==2){
            int c1=a[0];
            for(int i=1;i<n;i++){
                if(a[i]==c1){
                    count1++;
                }
                else{
                    count2++;
                }
            }
            if(abs(count1-count2)<=1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}