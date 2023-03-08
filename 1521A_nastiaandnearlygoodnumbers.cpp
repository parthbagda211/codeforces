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
    ll a,b;cin>>a>>b;
   if(b==1){
    cout << "NO" << endl;
   }
   else{
cout << "YES" << endl;
    cout << a << " " << a*b << " " << a*(b+1) << endl;
   }
    
}
return 0;
}