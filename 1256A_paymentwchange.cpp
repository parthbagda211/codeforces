#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define P  cout <<
#define S  cin >>
#define en  << endl
#define $  >>
int main(){
fastread();
int t;cin>>t;
while(t--){
    ll a,b,n,s;cin>>a>>b>>n>>s;

    if(s%n<=b and a*n+b>=s){
        P "YES" en;
    }
    else{
        P "NO" en;
    }
}
return 0;
}