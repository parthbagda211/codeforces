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
    ll x,y,a,b;cin>>x>>y>>a>>b;
    ll ans1=0,ans2=0;

    if(x>y){
        swap(x,y);
    }

    ans1 = x*a+y*a;
    ll z = y-x;
    ans2 = z*a +x*b;

    cout << min(ans1,ans2) << endl;
}
return 0;
}