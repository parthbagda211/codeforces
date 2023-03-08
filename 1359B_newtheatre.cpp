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
    int n,m,x,y;cin>>n>>m>>x>>y;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='.' and arr[i][j+1]=='.' and j+1<m){
                ans += min(2*x,y);j++;

            }
            else if(arr[i][j]=='.'){
                ans+=x;
            }
        }
    }

    P ans en;
}
return 0;
}