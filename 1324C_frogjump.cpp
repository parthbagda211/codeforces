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
int t;cin>>t;
while(t--){
    string s;cin>>s;
    int n = s.size();
    vector<int>v;
    int ans= INT_MIN;
    v.push_back(0);
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            v.push_back(i+1);
        }
    }
    v.push_back(n+1);
    for(int i=0;i<v.size()-1;i++){
    ans = max(ans,v[i+1]-v[i]);
    }
    cout << ans << endl;
}
return 0;
}