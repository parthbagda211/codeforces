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
int main(){
fastread();
ll t;cin>>t;
while(t--){
    ll a,b,x,y,n;cin>>a>>b>>x>>y>>n;
    ll ans=1e9;
    while(n--){
      while(a>x){
        a--;
      }
      while(b>y){
        b--;
      }
    ans = min(ans,a*b);
    }
    cout << ans << endl;
}
return 0;
}