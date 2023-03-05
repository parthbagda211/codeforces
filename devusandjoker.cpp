#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n,d;cin>>n>>d;
vector<int>vt(n);
int sum=0;
for(int &i:vt){
    cin>>i;
    sum+=i;
}
int dd = abs(sum-d);
if(sum+10*(n-1)>d){
    cout << -1 << endl;
}
else{
    cout << (d-sum)/5 << endl;
}
return 0;
}