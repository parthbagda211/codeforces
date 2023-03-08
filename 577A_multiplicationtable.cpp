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
ll n,x;cin>>n>>x;
int cnt=0;
for(int i=1;i<=n;i++){
   if(x%i==0 and x/i<=n){
    cnt++;
   }

}
cout << cnt << endl;
return 0;
}