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
vector<int> vt(n);
int taxi=0;
for(int i=0;i<n;i++){
    cin>>vt[i];
}
sort(vt.begin(),vt.end());
int i = vt.size()-1;
int k =0;
while(k!=i){
    if(vt[i]+vt[k]<=4){
        vt[i]+=vt[k];
        k++;
    }else{
        i--;
        taxi++;
    }
}
cout << taxi+1 << endl;

return 0;
}