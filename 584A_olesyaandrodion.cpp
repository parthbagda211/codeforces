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
if(n==1 and t==10){
    P "-1" en;
}
else if(n>=2 and t==10){
    for(int i=1;i<n;i++){
        P "1";
    }
    P "0" en;
}
else{
    for(int i=1;i<=n;i++){
        P t;
    }
    cout << endl;
}

return 0;
}