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
int t;
t=1;
//cin>>t;
while(t--){
  ll n,m;cin>>n>>m;
  vll v(n+1);
  vll a(n+1);
  set<ll>s;
  for(ll i=1;i<=n;i++){
    cin>>v[i];
  }
  for(ll i=n;i>0;i--){
    s.insert(v[i]);
    a[i]=s.size();

  }
  ll x;
  for(ll i=1;i<=m;i++){
    cin>>x;

    cout << a[x] << endl;
  }
}

return 0;
}