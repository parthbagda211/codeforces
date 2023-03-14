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
ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    ll cn=0,ans=0;
    cin>>m>>n>>x;
    i=m%x, j=n%x;
    ans=(i+j)/x;
    if( ans >=1 )
        cn=x- max(i,j);
    ans+=(m/x + n/x );
    cout<< ans <<  " "<<cn<<endl;

return 0;
}