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
int n,t;cin>>n>>t;
int in=1;
int vt[n];
for(int i=1;i<n;i++){
    cin>>vt[i];
}
// for(int i=1;i<n;i++){
//     cout << vt[i] << " ";
// }
bool ans=false;
//cout << endl;
for(int i=1;i<n;){
    if(vt[i]<=n-i){
        i+=vt[i];
    }

   if(i==t){
    ans=true;
   }

}
if(ans){
    cout <<"YES" <<endl;
}
else{
    P "NO" en;
}



return 0;
}