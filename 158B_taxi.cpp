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
ll n;S n;
vll vt(n);
vll cnt(5,0);

FOR(i,0,n){
     S vt[i];
     cnt[vt[i]]++;
}
ll car = cnt[4];
car+=cnt[3];
cnt[1]-=cnt[3];
car+= (cnt[2]+1)/2;
cnt[1]-=(cnt[2]%2)*2;
if(cnt[1]>0){
    car += (cnt[1]+3)/4;
}

P car en;


return 0;
}