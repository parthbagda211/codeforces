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
    int n,m;cin>>n>>m;
    int x = n*m;
    if(x&1){
        P   (x-1)/2 +1 en;
    }
    else{
        P  x/2 en;
    }
}
return 0;
}