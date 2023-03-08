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
  
  string s;cin>>s;

  int cnt0=0,cnt1=0;
  cnt0 = count(s.begin(),s.end(),'0');
  cnt1 = count(s.begin(),s.end(),'1');
  //cout << cnt0 << " " << cnt1 << endl;
  int xx = min(cnt1,cnt0);
  if(xx%2){
    P "DA" en;
  }
  else {
    P "NET" en;
  }
}
return 0;
}