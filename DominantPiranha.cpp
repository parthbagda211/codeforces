#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;cin>>t;
while(t--){


int n;cin>>n;
vector<int>vt(n);
for(int i=0;i<n;i++){
    cin>>vt[i];
}
int idx=-1;
for(int i=0;i<n;i++){
  if(i==0){
    continue;

  }
  else if(i==n-1){
    if(vt[i-1]<vt[i]){
        idx = i+1;
    }
  }

  else{
    if(vt[i+1]<vt[i] or vt[i-1]<vt[i]){
        idx = i+1;
    }
  }


}
  cout << idx << endl;

}
return 0;
}