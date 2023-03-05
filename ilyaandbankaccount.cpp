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
ll n;S n;
ll M = n;
if(n/10>M) M = n/10;
if(n%10+(n/100)*10 > M) M = n%10+(n/100)*10;
P M en;
return 0;
}