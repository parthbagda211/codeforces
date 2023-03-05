#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
 
int n;cin>>n;
vector<int>vt(n);
for(int &i:vt){
    cin>>i;
}
sort(vt.begin(),vt.end());
for(auto it : vt){
    cout << it << " ";
}
return 0;
}