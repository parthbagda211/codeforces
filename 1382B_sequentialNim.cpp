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
//t=1;
cin>>t;
while(t--){
  ll n;cin>>n;
  vll v(n);
  for(ll i=0;i<n;i++){
    cin>>v[i];
  }
  ll k = 0;
  while(k<n and v[k]==1){
    k++;
  }
  cout << ((k==n) xor (k%2) ? "Second":"First") << endl;
}

return 0;
}