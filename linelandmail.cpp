#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n;cin>>n;
vector<int>vt(n);
for(int i=0;i<n;i++){
    cin>>vt[i];
}

for(int i=0;i<n;i++){
    long long mm,mx;
    if(!i){
        mm = abs(vt[i]-vt[i+1]);
        mx = abs(vt[i]-vt[n-1]);

    }
    else if(i==n-1){
        mx = abs(vt[i]-vt[0]);
        mm = abs(vt[i]-vt[i-1]);
    }
    else{
        mm = min(abs(vt[i]-vt[i+1]),abs(vt[i]-vt[i-1]));
        mx = max(abs(vt[i]-vt[0]),abs(vt[i]-vt[n-1]));
    }
    cout << mm << " " << mx << endl;
}

return 0;
}