#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
int main(){
fastread();
int t;cin>>t;
while(t--){
    int n;cin>>n;
    vector<int>vt(n);
    for(int &i:vt){
        cin>>i;
    }
    int ans=2;
    if(is_sorted(vt.begin(),vt.end())){
        ans=0;
    }
    else if(vt[0]==1 or vt[n-1]==n){
        ans = 1;
    }
    else if(vt[0]==n and vt[n-1]==1){
        ans = 3;
    }
    cout << ans << endl;
}
return 0;
}