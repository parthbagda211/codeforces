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

    for(int i=2;i<30;i++){
        ll tt = pow(2,i)-1;
        if(n%tt==0){
            P n/tt en;
            break;
        }
    }
}
return 0;
}