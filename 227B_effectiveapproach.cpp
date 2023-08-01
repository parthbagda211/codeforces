#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define P  cout <<
#define S  cin >>

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
  ll n;cin>>n;
  vll v(n+1);
  unordered_map<ll,ll>mp;
  
  for(ll i=1;i<=n;i++){
    cin>>v[i];
  }
  for(ll i=1;i<=n;i++){
    mp[v[i]]=i;
  }
  ll m;cin>>m;
  vll q(m+1);
  for(ll i=1;i<=m;i++){
    cin>>q[i];
  }
   ll st=0,en=0;
  for(ll i=1;i<=m;i++){
     st+=mp[q[i]];
     en+= (n-mp[q[i]]+1);
  }
 
  
  cout << st << " " << en << endl;

}

return 0;
}