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
int t;S t;
while(t--){
    ll n;S n;
 ll cnt2=0,cnt3=0;
    while(n%2==0){
        n = n/2;
        cnt2++;
    }
    while(n%3==0){
        n = n/3;
        cnt3++;
    }

    if(n==1 and cnt2<=cnt3){
        P 2*cnt3-cnt2 en;
    }
    else{
        P -1 en;
    }
}
return 0;
}