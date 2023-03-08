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
int t;S t;
while(t--){
int n; S n;
int cnt2021 = n%2020;
int cnt2020 = ((n-cnt2021)/2020)-cnt2021;

if(cnt2020>=0 and 2020*cnt2020+2021*cnt2021==n){
    P "YES" en;

}else{
    P "NO" en;
}

}

return 0;
}