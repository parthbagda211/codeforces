#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define P  cout <<
#define S  cin >>
#define en  << endl
#define $  >>
int lcs(string & a, string &b,int m,int n){

    int dp[m+1][n+1];
   for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
        if(i==0 or j==0){
            dp[i][j]=0;
        }
    }
   }



   for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        if(a[i-1]==b[j-1]){
            dp[i][j] = dp[i-1][j-1]+1;
        }
        else{
            dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    }
   }

   return dp[m][n];
}
int main(){
fastread();
string a,b;cin>>a>>b;
int na=a.size(),nb=b.size();


if(a==b){
    cout << -1 << endl;
}
else{
    cout << max(na,nb) << endl;
}

return 0;
}