#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        while(true){
            long long temp=n;
            int a[20];
            int i=0;
            while(temp>0){
                a[i]=temp%10;
                temp=temp/10;
                i++;
            }
            bool ok=true;
            for(int j=0;j<i;j++){
               if(a[j]!=0){
                 if(n%a[j]!=0){
                    ok=false;
                    break;
                 }
               } 
            }
            if(ok){
            cout<<n<<endl;
            break;
            }
            n++;
        }
    }
}