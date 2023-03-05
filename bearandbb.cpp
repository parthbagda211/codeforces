#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
 int n,m;cin>>n>>m;
 int cc=0;
 while(n<=m){
    cc++;
    n = n*3;
    m = m*2;
    

 }
 cout << cc << endl;

return 0;
}