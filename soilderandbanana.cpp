#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int k,n,w;cin>>k>>n>>w;
  int sum = 0;
  for(int i=1;i<=w;i++){
    sum +=i*k;

  }
  if(sum-n>0){
    cout << sum-n << endl;
  }
  else{
    cout << 0 << endl;
  }

return 0;
}