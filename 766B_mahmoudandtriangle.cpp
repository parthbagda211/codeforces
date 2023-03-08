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
ll n;cin>>n;
vector<ll>vt(n);
for(ll &i:vt){
    cin>>i;
}
sort(vt.begin(),vt.end());
for(int i=1;i<n-1;i++){
    if(vt[i-1]+vt[i]>vt[i+1]){
        P "YES" en;
        return 0;
    }
}
P "NO" en;
return 0;
}