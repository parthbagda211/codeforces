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
int n;cin>>n;
if(n&1){
    P 0 en;
}else{
    P (1<<(n/2)) en;
}
return 0;
}