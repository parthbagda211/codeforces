#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
int main(){
fastread();
ll t;cin>>t;
while(t--){
    ll n,x;cin>>n>>x;
    vector<ll>vt(n);
    ll sum1=0,minans=0,maxans=0;
    for(ll &i:vt){
        cin>>i;
        sum1+=i;
        maxans += i/x;
        if(i%x!=0)maxans++;
    }
    minans = (sum1/x);
    if(sum1%x!=0)
    minans++;


    cout << minans << " "<<maxans << endl;
    



}
return 0;
}