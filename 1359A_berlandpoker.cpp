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
    ll n,m,k;cin>>n>>m>>k;

    ll c = n/k;
    if(c>=m) P m en;
    else{
        ll rem = m-c;
        ll oth = ceil(1.0 * rem /(k-1));
        cout << c-oth << endl;
    }


}
return 0;
}