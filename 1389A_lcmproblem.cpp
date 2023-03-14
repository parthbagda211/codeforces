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
    ll l,r;cin>>l>>r;

    if(2*l>r){
        cout << -1 << " " << -1 << endl;
    }
    else{
        cout << l << " " << 2*l << endl;
    }
}
return 0;
}