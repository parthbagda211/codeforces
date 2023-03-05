#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define P  cout <<
#define S  cin >>
#define en  << endl;
int main(){
fastread();
int t;S t;
while(t--){
    ll a,b,c,d;cin>>a>>b>>c>>d;

    ll x = a*d,y=b*c;

    if(x==y) P 0 en
    else if(x!=0 and y%x==0 || y!=0 and x%y==0) P 1 en
    else P 2 en
}
return 0;
}