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
vll vt(n);
FOR(i,0,n){
    S vt[i];
}
sort(all(vt),greater<ll>());
int cnt=0;
ll sum=0;
ll a = vt[0];
ll b = vt[1];


P m/(k+1) * (a*k+b) + m%(k+1) * a en;
return 0;
}