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
    ll a,b,x,y,n;cin>>a>>b>>x>>y>>n;

    while(n--){
        if(a>=x and b>=y){
            a--;
            b--;
        }
    }
    cout << a*b << endl;
}
return 0;
}