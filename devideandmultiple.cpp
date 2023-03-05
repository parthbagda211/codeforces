#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define P  cout <<
#define S  cin >>
#define en  << endl;
int main(){
fastread();
ll t;S t;
while(t--){
    ll n;S n;
    vector<ll>vt(n);
    ll tt=1;
    for(ll i=0;i<n;i++){
        S vt[i];
    }
    for(ll i=0;i<n;i++){
        while(vt[i]%2==0){
            vt[i]/=2;
            tt *=2;
        }

    }
    sort(vt.begin(),vt.end());
    vt[n-1]*=tt;
   
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=vt[i];
    }

    P sum en
}
return 0;
}