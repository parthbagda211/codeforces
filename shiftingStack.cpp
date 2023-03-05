#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
     ll n;cin>>n;
    vector<ll>vt(n);
    for(ll &i:vt){
        cin>>i;
    }
    ll need=0,sum=0;
    for(int i=0;i<n;i++){
        need +=i;
        sum+=vt[i];

        if(sum<need){
            cout<< "NO" << endl;
            return ;
        }
    }

    cout << "YES" << endl;
}

int main(){
ll t;cin>>t;
while(t--){
    solve();
}
return 0;

}