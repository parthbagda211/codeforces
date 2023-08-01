#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define P  cout <<
#define S  cin >>
#define en  << endl
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define ff first
#define ss second
#define pb push_back
#define $  >>
int main(){
fastread();
int t;
t=1;
//cin>>t;
while(t--){
  int n=5;
  vi v(n);
  int sum=0;
  for(int &i:v){
    cin>>i;
    sum+=i;
  }
  if(sum%5==0 and sum!=0){
    cout << sum/5 << endl;
  }else{
    cout << -1 << endl;
  }
}

return 0;
}