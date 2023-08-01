#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll long long
#define P  cout <<
#define S  cin >>
#define en  << endl
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define ff first
#define ss second
#define pb push_back
#define $  >>
int main(){
fastread();
ll n;cin>>n;
vll firstt(n),sec(n-1),third(n-2);
ll sum1=0,sum2=0,sum3=0;
for(ll i=0;i<n;i++){
   cin>>firstt[i];

   sum1+=firstt[i];
}
for(ll i=0;i<n-1;i++){
   cin>>sec[i];

   sum2+=sec[i];
}
for(ll i=0;i<n-2;i++){
   cin>>third[i];

   sum3+=third[i];
}
cout << sum1-sum2 << endl;
cout << sum2-sum3 << endl;

return 0;
}