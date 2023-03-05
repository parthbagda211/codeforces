#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n=12,k;cin>>k;
vector<int>vt(n);
int sum=0;
for(int i=0;i<n;i++){
    cin>>vt[i];
    sum+=vt[i];
}
int c=0;

sort(vt.begin(),vt.end(),greater<int>());
if(k>sum){
    cout << -1 << endl;
}
else{
int s=0,mont=0;
while(s<k){
    s+=vt[mont];
    mont++;
}
cout << mont << endl;

}


return 0;
}