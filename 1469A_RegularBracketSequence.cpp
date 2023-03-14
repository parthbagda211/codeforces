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
    string s;cin>>s;
    int n = s.size();
    if(n&1){
        P "NO" en;
    }
    else{
        if(s[0]==')' or s[n-1]=='(')
        P "NO" en;



        else 
        P "YES" en;
    }
}
return 0;
}