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
const string subb[] = {"00","25","50","75"};
const int INF = 10000;
int solve(string&s,string&t){
    int n = s.size()-1;
    int ans=0;
    while(n>=0 and s[n]!=t[1]){
        n--;
        ans++;
    }
    if(n<0) return INF;
    else{
        n--;
    }
    while(n>=0 and s[n]!=t[0]){
        n--;
        ans++;
    }

    if(n<0) {
        return INF;
    }else{
        return ans;
    }
}
int main(){
fastread();
int t;
//t=1;
cin>>t;
while(t--){
  string s;cin>>s;
  int ans =INF;
  for(auto it : subb){
      ans = min(ans,solve(s,it));
  }
  cout << ans << endl;
}

return 0;
}