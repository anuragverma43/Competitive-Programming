#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(long long n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    if (n % 3 == 0) return n == 3;
    for (long long i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

vector<bool> is_prime;
void sieve(ll n = 1e6) {
    is_prime.assign(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= n; i++)
        if (is_prime[i])
            for (ll j = i * i; j <= n; j += i)
                is_prime[j] = false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>v(n);
        ll k =0;
        ll sum =0;
        ll slot =0;
        ll mx =0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>=2){
                k++;
                sum +=v[i];
                slot +=(v[i]-2)/2;
            }
            mx = max(mx, v[i]);
        }
        if(k==0){
            cout<<0<<endl;
        }
        else if(k==1){
            ll uni=n-1;
            ll ans=mx+min(uni,mx/2);
            if(ans<3) {
                cout << 0 <<endl;
            }
            else{
                cout << ans <<endl;
            }
        }
        else{
            ll uni=n-k;
            ll ans=sum+min(uni,slot);
            cout<<ans<<endl;
        }
    }
    return 0;
}