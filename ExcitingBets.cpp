#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;cin>>t;
while(t--){
   ll a, b;
    cin >> a >> b;
   if(a==b){
    cout << 0 << " " << 0 << endl;
   }else{
    ll g = abs(a-b);
    ll m = min(a%g,g-a%g);
    cout << g << " " << m << endl;
   }
  
}
return 0;
}