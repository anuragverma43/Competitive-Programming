#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int m_a=0;int m_b=0;int count=1;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                count++;
            }
            else{
                if(s[i-1]=='<'){
                    m_a=max(m_a,count);
                }
                else{
                    m_b=max(m_b,count);
                }
                count=1;
            }
        }
        if(s.back()=='<'){
            m_a=max(m_a,count);
        }
        else{
            m_b=max(m_b,count);
        }
        cout<<(max(m_a,m_b)+1)<<endl;
    }
}