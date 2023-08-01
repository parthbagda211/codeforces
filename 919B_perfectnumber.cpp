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
int solve(int num){
    int ans =0;
    while(num){
        ans += num%10;
        num = num/10;
    }
    return ans;
}
int main(){
fastread();
int t;
t=1;
//cin>>t;
while(t--){
  int ans=0;
  int n;cin>>n;
  while(n){
    ans++;
   if(solve(ans)==10) n--;
  }
  cout << ans << endl;
}

return 0;
}