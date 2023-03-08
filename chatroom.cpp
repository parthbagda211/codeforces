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
string s; S s;
string ans = "hello";
int j=0,pos=0;
for(int i=0;i<s.size();i++){
   if(s[i]==ans[j]){
    j++;pos++;
   }
}

if(pos==5){
    P "YES" en;

}
else{
    P "NO" en;
}
return 0;
}