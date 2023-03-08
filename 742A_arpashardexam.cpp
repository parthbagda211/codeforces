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
ll n;cin>>n;

if(n==0){
    cout << 1 << endl;
    return 0;
}

if(n%4==0){
    P "6" en;
}
else if(n%4==1){
    P "8" en;
}
else if(n%4==2){
    P "4" en;
}
else if(n%4==3){
    P "2" en;
}
return 0;
}