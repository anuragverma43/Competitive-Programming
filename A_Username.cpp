#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        s.pop_back();
        while(!s.empty() && s.back()=='0'){
            s.pop_back();
        }
        cout << s << endl;
    }
        return 0;
}