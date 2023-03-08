#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define P  cout <<
#define S  cin >>
#define en  << endl
#define $  >>
int main(){
fastread();
int t;cin>>t;
while(t--){
    ll n;cin>>n;

    ll ans=0;

    for(int i=1;i<=n/2;i++){
         ans +=i * 1ll * i;
    }
    cout << ans*8 << endl;
}
return 0;
}