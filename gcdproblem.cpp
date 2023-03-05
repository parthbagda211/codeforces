#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
int main(){
fastread();
int t;cin>>t;
while(t--){
    ll n;cin>>n;

   if(n%2==0){
    cout << 2 <<" " << (n-1)-2 << " " << 1 << endl;
   }
   else{
    ll cc = (n-1)/2;

    if(cc%2==0){
        cout << cc-1<< " " << cc+1 << " " << 1 << endl;
  }
  else{
    cout << cc-2 << " " << cc+2 << " " << 1 << endl;
  }
   }

}
return 0;
}