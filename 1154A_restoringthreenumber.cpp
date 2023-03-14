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
#define vii vector<vector<int>>
#define ff first
#define ss second
#define pb push_back
#define $  >>
int main(){
fastread();
vector<ll> vt(4);
FOR(i,0,4){
    cin>>vt[i];
}
sort(all(vt));
ll d = vt[3];
ll a = vt[0];
ll b = vt[1];
ll c = vt[2];
cout << d-a << " " << d-b << " " << d-c << endl;
return 0;
}