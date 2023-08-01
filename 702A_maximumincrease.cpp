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
  int n;cin>>n;
  vi v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  vi dp(n,1);
  for(int i=1;i<n;i++){
    if(v[i-1]<v[i]){
        dp[i]+=dp[i-1];
    }else{
        dp[i]=1;
    }
  }
  cout << *max_element(dp.begin(),dp.end()) << endl;
}

return 0;
}