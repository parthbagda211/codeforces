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
    ll n;cin>>n;
    vll v(n);
    for(ll  i=0;i<n;i++){
        cin>>v[i];
    }
    bool ans = false;
    for(ll i=0;i<n;i++){
        for(ll j=i+2;j<n;j++){
            if(v[i]==v[j]) {
                ans=true;
            }
        }
    }
    if(ans){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
return 0;
}