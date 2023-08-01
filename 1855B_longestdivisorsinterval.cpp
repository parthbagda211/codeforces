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
    ll n;cin>>n;
    ll res = 0;
    for(ll i=1;i<=10;i++){
        if(n%i==0){
        ll ans =n/i - i+1;
        res = max(res,ans);
        }
        
    }
    cout << res << endl;
}
return 0;
}