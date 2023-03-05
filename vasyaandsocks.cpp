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
int n,m; S n $ m;
int ans = n + n/(m-1);
if(n%(m-1)==0)
ans--;

P ans en;
return 0;
}