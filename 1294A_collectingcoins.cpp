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
   ll a[3],n;
   cin>>a[0]>>a[1]>>a[2]>>n;

   sort(a,a+3);
   n-= 2*a[2]-a[1]-a[0];
   if(n<0 || n%3!=0){
    P "NO" en;
   }
   else{
    P "YES" en;
   }
}
return 0;
}