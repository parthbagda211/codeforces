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
    ll n,k;cin>>n>>k;
    ll cf = (n+k-1)/k;
    k*=cf;

    cout << (k+n-1)/n << endl;

}
return 0;
}