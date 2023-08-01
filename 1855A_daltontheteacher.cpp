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
int t;cin>>t;
while(t--){
    int n;cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<n+1;i++){
        cin>>v[i];
    }
    int same=0;
    for(int i =1;i<n+1;i++){
        if(i==v[i]){
            same++;
        }
    }
    if(same%2==0){
        cout << same/2 << endl;
    }else{
        cout << (same/2) + 1 << endl;
    }
}
return 0;
}