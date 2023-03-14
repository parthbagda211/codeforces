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
int t;cin>>t;
while(t--){
    int n,x;cin>>n>>x;
    int tt= (n-3)/x;
    if(n<=2){
        P 1 en;
    }
    else{
        P  tt+2 en;
    }
}
return 0;
}