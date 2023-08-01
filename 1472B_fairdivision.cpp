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
//t=1;
cin>>t;
while(t--){
  int n;cin>>n;
  vi v(n);
  int sum=0;
  int one=0,two=0;
  for(int &i : v){
    cin>>i;
    if(i==1){
        one++;
    }else{
        two++;
    }
    
  }
  if((two *2 +one)%2!=0){
    cout << "NO" << endl;
  }else{
    sum = (two *2+ one)/2;
    if(sum%2==0 or (sum%2==1 and one!=0)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
  }
  
}

return 0;
}