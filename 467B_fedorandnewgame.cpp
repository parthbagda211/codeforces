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
ll n,m,k;cin>>n>>m>>k;
vll vt(m+1);
ll ans=0;
for(ll i=0;i<m+1;i++){
    cin>> vt[i];
}
for(ll i=0;i<m;i++){
    ll t=0;
    for(int j = 0;j<n;j++){

        if(((vt[i]>>j)&1) != ((vt[m]>>j)&1)){
            t++;
        }


    }
    if(t<=k){
        ans++;
    }
}
cout << ans << endl;

return 0;
}