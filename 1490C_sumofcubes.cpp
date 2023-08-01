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
unordered_set<ll> cube;
const ll N = 1'000'000'000'000L;
void solve1(){
    for(ll i = 1;i*i*i<=N ; i++){
        cube.insert(i*i*i);
    }
}
void solve2(){
ll x;cin>>x;
for(ll i =1;i*i*i <=x;i++){
    if(cube.count(x-i*i*i)){
        cout << "YES" << endl;
        return ;
    }
 
}
cout << "NO" << endl;
}
int main(){
fastread();
int t;cin>>t;
while(t--){
    solve1();
    solve2();
}
return 0;
}