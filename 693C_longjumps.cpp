#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define P  cout <<
#define S  cin >>
#define en  << endl
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define ff first
#define ss second
#define pb push_back
#define $  >>
ll solve(){
    ll n;cin>>n;
    ll a[n];
    ll ans[n] = {0};

    FOR(i,0,n)  S a[i];

    for(int i=n-1;i>=0;i--){
        int in = i;
        ans[i] = a[i];
        in +=a[i];
        if(in<n){
            ans[i] +=ans[in];
        }
    }
    cout << *max_element(ans,ans+n) << endl;
}
int main(){
fastread();
int t;cin>>t;
while(t--){
    solve();
}
return 0;
}