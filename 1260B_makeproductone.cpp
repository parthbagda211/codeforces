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
int n;cin>>n;
vll v(n);
ll neg=0;
ll sum=0;
ll zero=0;
ll k =0;
ll pos=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    

}
for(int i=0;i<n;i++) {
    if(v[i]==-1 or v[i]==1)continue;
    else if(v[i]<-1){
        sum += abs(v[i]+1);
        v[i] -= (v[i]+1);
    }else if(v[i]>1){
        sum += v[i]-1;
        v[i]=1;
    }
}
for(int i=0;i<n;i++){
    if(v[i]==0){
        zero++;
        v[i]=1;
    }
    else if(v[i]==-1)neg++;
    else if(v[i]==1)pos++;
}
sum+=zero;
pos+=zero;
if(neg%2==1){
    if(zero>0) pos--;
    else sum+=2;
}

cout << sum << endl;

return 0;
}