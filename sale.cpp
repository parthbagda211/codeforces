#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n,m;cin>>n>>m;
vector<int>vt(n);
for(int i=0;i<n;i++){
    cin>>vt[i];
}
sort(vt.begin(),vt.end());
int sum=0;
for(int i=0;i<m;i++){
if(vt[i]>=0){
    continue;
}

sum +=vt[i];

}
cout << -sum << endl;

return 0;
}