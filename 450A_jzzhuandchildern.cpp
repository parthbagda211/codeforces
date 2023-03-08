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
int n,m;cin>>n>>m;
double t,last,max(0);

for(int i=1;i<=n;i++){
    cin>>t;
    if(ceil(t/m)>=max){
        last = i;
     //ans = min(ans,last);
     max = ceil(t/m);
      
    }
}
P last en;




return 0;
}