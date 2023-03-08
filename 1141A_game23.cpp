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
ll n,m;cin>>n>>m;

ll res=-1;
if(m%n==0){
    res=0;
    ll x = m/n;

    while(x%2==0){
        x=x/2;
        res++;
    }
    while(x%3==0){
        x=x/3;
        res++;
    }
    if(x!=1)
    res=-1;
}

P res en;
return 0;
}